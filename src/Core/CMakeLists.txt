###############################################   Targets
# Add the Core target.
add_library("Core" INTERFACE)

# Add the Graph subtarget.
add_subdirectory("Graph/")

# Link the subtargets to the Core target.
target_link_libraries("Core" INTERFACE "Graph")

