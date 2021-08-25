cmake_minimum_required(VERSION 3.20)
project(ExeG VERSION 0.1.0)
list(APPEND CMAKE_MESSAGE_CONTEXT ${PROJECT_NAME})

add_executable(
    ${PROJECT_NAME}
    main.cpp
    src/FunA.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

include(FetchContent)
set(FETCHCONTENT_SOURCE_DIR_LIBB D:/Code/CMake/Own/dependencies/LibB)
FetchContent_Declare (
    LibB
)
FetchContent_MakeAvailable(LibB)

message("libb_SOURCE_DIR: ${libb_SOURCE_DIR}")

target_link_libraries(${PROJECT_NAME} PRIVATE LibB)