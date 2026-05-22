# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog
# include waveform
WAVES = 1
EXTRA_ARGS += --trace --trace-fst --trace-structs --coverage
VERILOG_SOURCES += $(PWD)/../../src/SystemVerilog/alu.sv

# COCOTB_TOPLEVEL: name of toplevel module in HDL file
COCOTB_TOPLEVEL = alu

# COCOTB_TEST_MODULES: basename of Python test files
COCOTB_TEST_MODULES = test_alu

# include cocotb's make rules to take care of sim setinclude $(shell cocot-config --makefiles)/Makefile.sim
include $(shell cocotb-config --makefiles)/Makefile.sim