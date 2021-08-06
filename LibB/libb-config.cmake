include(CMakeFindDependencyMacro)
find_dependency(LibA)
include(${CMAKE_CURRENT_LIST_DIR}/LibB_Targets.cmake)