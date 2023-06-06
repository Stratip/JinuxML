###############################################   Targets
# Add main target.
add_executable("JinuxMLTest" "JinuxMLTest.cpp")
target_compile_features("JinuxMLTest" PRIVATE cxx_std_17)
target_link_libraries("JinuxMLTest" "JinuxML" "include_directories")
add_test(
	NAME "JinuxML"
	COMMAND "JinuxMLTest"
)

