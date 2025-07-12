message(STATUS "Setting up for Windows")

# You may adjust these paths as needed
set(GLFW_INCLUDE_DIRS "C:/msys64/mingw64/include")
set(GLFW_LIB_DIR "C:/msys64/mingw64/lib")

link_directories(${GLFW_LIB_DIR})
include_directories(${GLFW_INCLUDE_DIRS})

list(APPEND PLATFORM_LIBS glfw3 opengl32)
