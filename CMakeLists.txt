# My build system is absolutely horrible. I have not tested this on any machine other than mine at
# all and everything has been hardcoded. Seriously, please fix the build system.

###############################################   Project

# This version has been pulled out of thin air and has not been tested anywhere.
cmake_minimum_required(
	VERSION 3.13
)

project(
	"JinuxML"
	VERSION 0.1.0.0
)
###############################################   Config

# Export compile commands.
set(
	CMAKE_EXPORT_COMPILE_COMMANDS
	ON
)
###############################################   Targets

# Run Clang-Tidy.
set(
	CMAKE_CXX_CLANG_TIDY
	clang-tidy;
	-header-filter=.;
	-checks=bugprone-*,cppcoreguidelines-*,modernize-*,portability-*,readability-*,misc-*;
)

# Add an include_directories interface so that targets in subdirectories do not have to hardcode
# messy relative paths for include directories.
add_library(
	"include_directories"
	INTERFACE
)
target_include_directories(
	"include_directories"
	INTERFACE
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# Build the JinuxML target.
add_subdirectory(
	"src/"
)

# Build tests for JinuxML.
include(CTest)
enable_testing()
add_subdirectory("tests/")

