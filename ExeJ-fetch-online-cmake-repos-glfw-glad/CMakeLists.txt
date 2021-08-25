cmake_minimum_required(VERSION 3.20)
project(ExeJ VERSION 0.1.0)
list(APPEND CMAKE_MESSAGE_CONTEXT ${PROJECT_NAME})

add_executable(
    ${PROJECT_NAME}
    main.cpp
    src/FunA.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

add_subdirectory(external)
target_link_libraries(${PROJECT_NAME} PRIVATE
    glad
    glfw
)