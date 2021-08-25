cmake_minimum_required(VERSION 3.20)
project(LibB VERSION 0.1.0)
list(APPEND CMAKE_MESSAGE_CONTEXT ${PROJECT_NAME})

add_library(${PROJECT_NAME} src/LibB.cpp)
target_include_directories(${PROJECT_NAME}
    PRIVATE include/LibB
    INTERFACE include
)
