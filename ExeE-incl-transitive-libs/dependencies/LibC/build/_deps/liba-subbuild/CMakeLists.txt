# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.21.1)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(liba-populate NONE)



include(ExternalProject)
ExternalProject_Add(liba-populate
                     "UPDATE_DISCONNECTED" "False"
                    SOURCE_DIR          "D:/Code/CMake/Own/ExeE-incl-transitive-libs/dependencies/LibC/build/_deps/liba-src"
                    BINARY_DIR          "D:/Code/CMake/Own/ExeE-incl-transitive-libs/dependencies/LibC/build/_deps/liba-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


