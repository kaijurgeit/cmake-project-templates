cmake_minimum_required(VERSION 3.21)
project(LibB LANGUAGES CXX)
list(APPEND CMAKE_MESSAGE_CONTEXT ${PROJECT_NAME})

# Target
add_library(${PROJECT_NAME})

# Fetch LibA
include(FetchContent)
set(FETCHCONTENT_SOURCE_DIR_LIBA, "D:/Code/CMake/Own/LibA")
FetchContent_Declare(
    LibA
    # GIT_REPOSITORY ""
    # CONFIGURE_COMMAND ""
    # BUILD_COMMAND ""
    # SOURCE_DIR ${CMAKE_CURRENT_BINARY_DIR}/savedSrc
    # BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/savedBin
    DOWNLOAD_COMMAND ${CMAKE_COMMAND} -E make_directory <SOURCE_DIR> <BINARY_DIR>
)
FetchContent_MakeAvailable(LibA)

message("${liba_SOURCE_DIR}")
message("${liba_BINARY_DIR}")

target_include_directories(${PROJECT_NAME} 
        PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>)
target_sources(${PROJECT_NAME} PRIVATE src/LibB.cpp)
target_link_libraries(${PROJECT_NAME} LibA)