###############################################   Targets
# Add the JinuxML target.
add_library("JinuxML" INTERFACE)

# Add the Core subtarget.
add_subdirectory("Core/")

# Link subtargets to the JinuxML target.
target_link_libraries("JinuxML" INTERFACE "Core")

