cmake_minimum_required(VERSION 3.20)
project(LibD VERSION 0.1.0)
list(APPEND CMAKE_MESSAGE_CONTEXT ${PROJECT_NAME})

add_library(${PROJECT_NAME} src/LibD.cpp)
target_include_directories(${PROJECT_NAME}
    PRIVATE include/LibD
    INTERFACE include
)

# add_subdirectory(dependencies)

include(FetchContent)

set(FETCHCONTENT_SOURCE_DIR_LIBA ${DIR_LIBA})
FetchContent_Declare (
    LibA
)
FetchContent_MakeAvailable(LibA)

set(FETCHCONTENT_SOURCE_DIR_LIBB ${DIR_LIBB})
FetchContent_Declare (
    LibB
)
FetchContent_MakeAvailable(LibB)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    LibA
    LibB
)
