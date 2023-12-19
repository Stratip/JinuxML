add_library("JinuxML" "")
target_sources("JinuxML" PUBLIC FILE_SET HEADERS BASE_DIRS ../include)
target_compile_features("JinuxML" PUBLIC cxx_std_17)

add_subdirectory("Core/")