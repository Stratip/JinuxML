###############################################   Targets
# Add the Graph target.
add_library("Graph" INTERFACE)

# Add the ComputationalGraph subtarget.
add_library("ComputationalGraph" SHARED "ComputationalGraph.cpp")
target_link_libraries("ComputationalGraph" "include_directories")
target_compile_features("ComputationalGraph" PRIVATE cxx_std_17)

# Add the Element subtarget.
add_library("Element" SHARED "Element.cpp")
target_link_libraries("Element" "include_directories")
target_compile_features("Element" PRIVATE cxx_std_17)

# Add the Elements subtarget.
add_subdirectory("Elements/")

# Add the Executor subtarget.
add_library("Executor" SHARED "Executor.cpp")
target_link_libraries("Executor" "include_directories")
target_compile_features("Executor" PRIVATE cxx_std_17)

# Link the subtargets to the Graph target.
target_link_libraries("Graph" INTERFACE "ComputationalGraph" "Element" "Elements" "Executor")

