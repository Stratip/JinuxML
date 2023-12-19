cmake_minimum_required(VERSION 3.24)
project("JinuxML" VERSION 0.0.1)

if(
NOT DEFINED CMAKE_CXX_VISIBILITY_PRESET AND
NOT DEFINED CMAKE_VISIBILITY_INLINES_HIDDEN
)
    set(CMAKE_CXX_VISIBILITY_PRESET hidden)
    set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)
endif()

if(DEFINED JinuxML_SHARED_LIBS)
    set(BUILD_SHARED_LIBS "${JinuxML_SHARED_LIBS}")
endif()

add_subdirectory("src/")

add_executable("main" "main.cpp")
target_link_libraries("main" "JinuxML")