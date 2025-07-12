message(STATUS "Setting up for Linux")

find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
find_package(OpenGL REQUIRED)

include_directories(${GLFW_INCLUDE_DIRS})
list(APPEND PLATFORM_LIBS ${GLFW_LIBRARIES} ${OPENGL_LIBRARIES} dl pthread)
