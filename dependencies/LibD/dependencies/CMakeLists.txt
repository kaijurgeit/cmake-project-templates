cmake_minimum_required(VERSION 3.20)

include(FetchContent)

# set(dependencies_source_dir)

set(DIR_LIBA D:/Code/CMake/Own/dependencies/LibA)
FetchContent_Declare (
    LibA
)
FetchContent_MakeAvailable(LibA)

set(DIR_LIBB D:/Code/CMake/Own/dependencies/LibB)
FetchContent_Declare (
    LibB
)
FetchContent_MakeAvailable(LibB)