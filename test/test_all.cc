#include <optkit.hh>
#include <intel/icl.hh>
#include <omp.h>

namespace optkit::test
{

    using optkit::core::BlockGroupProfiler;
    using optkit::core::BlockProfiler;
    using optkit::core::RaplDomain;
    using optkit::core::RaplProfiler;

    int32_t test_all()
    {
#define POWER_CARM \
    {              \
        11         \
    }
#define STREAM_ARRAY_SIZE 100000

        double a[100000];
        double b[100000];
        double c[100000];
        int scalar = 3;

        OPTKIT_GANTT_PROFILE_BEGIN_SESSION("Optimizer Toolkit GUI", "optkit_gui_gantt_instr.json");
        optkit::utils::logger::BaseLogger::init();
        optkit::core::Query::init();

        auto default_pmu = optkit::core::Query::default_pmu_info();
        auto default_pmu2 = optkit::core::Query::default_pmu_info();
        optkit::core::Query::list_avail_pmus();
        auto avail_pmu_list = optkit::core::Query::avail_pmu_ids();

        for (int32_t i : avail_pmu_list)
            std::cout << i << ", ";

        std::cout << optkit::core::Query::pmu_info(avail_pmu_list[0]);

        std::cout << std::endl;
        std::cout << "___________ 447 ____________" << std::endl;
        optkit::core::Query::list_avail_events(PFM_PMU_INTEL_ICL);
        std::cout << optkit::core::Query::event_detail(PFM_PMU_INTEL_ICL, icl::UNHALTED_CORE_CYCLES);

        std::map<RaplDomain, double> raplDomainMap;

        // Inserting values into the map
        raplDomainMap[RaplDomain::PP0] = 10;
        raplDomainMap[RaplDomain::PP1] = 20;
        raplDomainMap[RaplDomain::PACKAGE] = 30;
        raplDomainMap[RaplDomain::DRAM] = 40;

        // Printing the map using overloaded <<
        std::cout << "RaplDomain Map: " << raplDomainMap << std::endl;

        // STREAM TRIAD
        {
            float aa = 33;

            // We'll see different numbers due to multiplexing
            BlockGroupProfiler fp_arit{"FP_ARITH", "FP_ARITH", {
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                   {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                               }};

            BlockGroupProfiler fp_arit2{"FP_ARITH2", "FP_ARITH", {
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE, ""},
                                                                     {icl::FP_ARITH_INST_RETIRED | icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE, ""},
                                                                 }};
            ssize_t j;

#pragma omp parallel
            {

                aa += 0.23f; // to scalar single, num_threads x 1
#pragma omp single
                {
                    OPTKIT_CORE_INFO("{}/{}", omp_get_thread_num(), omp_get_num_threads());
                }

#pragma omp for
                for (j = 0; j < STREAM_ARRAY_SIZE; j++)
                    a[j] = b[j] + scalar * c[j]; // 1 mul 1 addition for scalar double x STREAM_ARRAY_SIZE
            }
        }

        /*
        OPTKIT::platforms::imgui::ImguiLayer_glfw_opengl_impl impl{};
        while (!glfwWindowShouldClose(impl.m_window))
        {
            // input
            // -----
            impl.begin_loop();

            // render
            // ------
            glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            impl.end_loop();
            glfwSwapBuffers(impl.m_window);
            glfwPollEvents();
        }
        */

        optkit::core::Query::destroy();
        OPTKIT_GANTT_PROFILE_END_SESSION();
        return 0;
    }
}