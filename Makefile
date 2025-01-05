# Alternative GNU Make workspace makefile autogenerated by Premake

ifndef config
  config=debug
endif

ifndef verbose
  SILENT = @
endif

ifeq ($(config),debug)
  OptimizerToolkitApp_config = debug
  OptimizerToolkitShared_config = debug
  OptimizerToolkitStatic_config = debug

else ifeq ($(config),release)
  OptimizerToolkitApp_config = release
  OptimizerToolkitShared_config = release
  OptimizerToolkitStatic_config = release

else
  $(error "invalid configuration $(config)")
endif

PROJECTS := OptimizerToolkitApp OptimizerToolkitShared OptimizerToolkitStatic

.PHONY: all clean help $(PROJECTS) 

all: $(PROJECTS)

OptimizerToolkitApp:
ifneq (,$(OptimizerToolkitApp_config))
	@echo "==== Building OptimizerToolkitApp ($(OptimizerToolkitApp_config)) ===="
	@${MAKE} --no-print-directory -C . -f OptimizerToolkitApp.make config=$(OptimizerToolkitApp_config)
endif

OptimizerToolkitShared:
ifneq (,$(OptimizerToolkitShared_config))
	@echo "==== Building OptimizerToolkitShared ($(OptimizerToolkitShared_config)) ===="
	@${MAKE} --no-print-directory -C . -f OptimizerToolkitShared.make config=$(OptimizerToolkitShared_config)
endif

OptimizerToolkitStatic:
ifneq (,$(OptimizerToolkitStatic_config))
	@echo "==== Building OptimizerToolkitStatic ($(OptimizerToolkitStatic_config)) ===="
	@${MAKE} --no-print-directory -C . -f OptimizerToolkitStatic.make config=$(OptimizerToolkitStatic_config)
endif

clean:
	@${MAKE} --no-print-directory -C . -f OptimizerToolkitApp.make clean
	@${MAKE} --no-print-directory -C . -f OptimizerToolkitShared.make clean
	@${MAKE} --no-print-directory -C . -f OptimizerToolkitStatic.make clean

help:
	@echo "Usage: make [config=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "  debug"
	@echo "  release"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   clean"
	@echo "   OptimizerToolkitApp"
	@echo "   OptimizerToolkitShared"
	@echo "   OptimizerToolkitStatic"
	@echo ""
	@echo "For more information, see https://github.com/premake/premake-core/wiki"