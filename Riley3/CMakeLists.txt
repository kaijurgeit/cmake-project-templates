cmake_minimum_required(VERSION 3.19)
project(RileyJsonCppUtils VERSION 1.0)

include(FetchContent)

# set(FETCHCONTENT_SOURCE_DIR_RILEYCPPUTILS "D:/Code/CMake/Own/riley-jsoncpp-utils")
FetchContent_Declare(
    RileyCppUtils
    GIT_REPOSITORY https://github.com/ryantherileyman/riley-jsoncpp-utils
    GIT_TAG 1.0.0
)
FetchContent_MakeAvailable(RileyCppUtils)
