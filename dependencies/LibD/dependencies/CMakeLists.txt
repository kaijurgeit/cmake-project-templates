cmake_minimum_required(VERSION 3.20)

include(FetchContent)

# set(dependencies_source_dir)

set(FETCHCONTENT_SOURCE_DIR_LIBA D:/Code/CMake/Own/dependencies/LibA)
FetchContent_Declare (
    LibA
)
FetchContent_MakeAvailable(LibA)

set(FETCHCONTENT_SOURCE_DIR_LIBB D:/Code/CMake/Own/dependencies/LibB)
FetchContent_Declare (
    LibB
)
FetchContent_MakeAvailable(LibB)