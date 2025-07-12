message(STATUS "Setting up for macOS")

find_package(OpenGL REQUIRED)

include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/lib)

list(APPEND PLATFORM_LIBS glfw ${OPENGL_LIBRARIES})
