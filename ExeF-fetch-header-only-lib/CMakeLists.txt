cmake_minimum_required(VERSION 3.20)
project(ExeF VERSION 0.1.0)
list(APPEND CMAKE_MESSAGE_CONTEXT ${PROJECT_NAME})

add_executable(
    ${PROJECT_NAME}
    main.cpp
    src/FunA.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

set(DIR_LIBA ${CMAKE_SOURCE_DIR}/../dependencies/LibA)

include(FetchContent)
set(FETCHCONTENT_SOURCE_DIR_LIBA ${DIR_LIBA})
FetchContent_Declare (
    LibA
)
FetchContent_MakeAvailable(LibA)

message("liba_SOURCE_DIR: ${liba_SOURCE_DIR}")

target_link_libraries(${PROJECT_NAME} PRIVATE LibA)