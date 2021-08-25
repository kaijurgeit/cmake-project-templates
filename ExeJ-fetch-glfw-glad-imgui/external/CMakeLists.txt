cmake_minimum_required(VERSION 3.20)

#--------------------------------------------------------------------
# GLFW
#--------------------------------------------------------------------
include(FetchContent)
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw
    GIT_TAG 814b7929c5add4b0541ccad26fb81f28b71dc4d8    # 3.3.4
)
FetchContent_MakeAvailable(glfw)