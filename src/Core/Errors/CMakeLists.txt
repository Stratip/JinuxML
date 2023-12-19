target_sources("JinuxML" PRIVATE "InvalidUsageError.cpp" "RuntimeError.cpp")

add_subdirectory("InvalidUsageErrors/")
add_subdirectory("RuntimeErrors/")