cmake_minimum_required(VERSION 3.20)
project(ExeI VERSION 0.1.0)
list(APPEND CMAKE_MESSAGE_CONTEXT ${PROJECT_NAME})

add_executable(
    ${PROJECT_NAME}
    main.cpp
    src/FunA.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

include(FetchContent)
set(FETCHCONTENT_SOURCE_DIR_LIBD D:/Code/CMake/Own/dependencies/LibD)
FetchContent_Declare (
  LibD
)
FetchContent_MakeAvailable(LibD)
message("libd_SOURCE_DIR: ${libd_SOURCE_DIR}")

target_link_libraries(${PROJECT_NAME} PRIVATE LibD)