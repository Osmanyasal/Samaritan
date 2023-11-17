#ifndef OPTIMIZER_TOOLKIT_CORE__SRC__CORE__PROFILING__RAPL__RAPL_PROFILER_HH
#define OPTIMIZER_TOOLKIT_CORE__SRC__CORE__PROFILING__RAPL__RAPL_PROFILER_HH

#include <memory>
#include <utils.hh>
#include <ostream>
#include <unordered_map>
#include <base_profiler.hh>
#include <profiler_config.hh>
#include <query.hh> 
#include <rapl_perf_reader.hh>
namespace optkit::core
{

    class RaplProfiler : public BaseProfiler<std::unordered_map<int32_t,std::unordered_map<RaplDomain, int32_t>>>
    { 
        public:
            RaplProfiler(const RaplConfig &config = RaplConfig{});
            virtual ~RaplProfiler();

            /**
             * @brief Disables this rapl profiler.
             *
             */
            virtual void disable() override;

            /**
             * @brief Enables this rapl profiler.
             *
             */
            virtual void enable() override;

            /**
             * @brief Reads the values of all raw_events.
             *
             * @return std::unordered_map<int32_t,std::unordered_map<RaplDomain, int32_t>> SocketID - RaplDomain - reading
             */
            virtual std::unordered_map<int32_t, std::unordered_map<RaplDomain, int32_t>> read() override;
 
        private:
            std::unique_ptr<BaseProfiler<std::unordered_map<int32_t, std::unordered_map<RaplDomain, int32_t>>>> rapl_reader;
            RaplConfig rapl_config;
            std::unordered_map<int32_t, std::unordered_map<RaplDomain, int32_t>> begin;
            std::unordered_map<int32_t, std::unordered_map<RaplDomain, int32_t>> end;
            
    };

} // namespace optkit::core

// Overloading << for unordered_map with RaplDomain as keys
std::ostream &operator<<(std::ostream &os, const std::unordered_map<optkit::core::RaplDomain, int32_t> &map);
 

#endif