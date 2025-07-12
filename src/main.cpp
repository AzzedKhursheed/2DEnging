// OpenGL loader (GLAD) and context/window management (GLFW)
#include <glad/gl.h>
#include <GLFW/glfw3.h>

// Standard libraries for I/O and math
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <fstream> // For file operations
#include <vector> // For std::vector

// ImGui headers
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"



void framebuffer_size_callback(GLFWwindow *window, int width, int height) {
  glViewport(0, 0, width, height);
}


int main()
{
    if (!glfwInit()) 
    {  
    std::cout << "Failed to initialize GLFW" << std::endl;
    return -1;
    }

    GLFWwindow *window = glfwCreateWindow(800, 600, "2DEnging", NULL, NULL);
    
    if (!window) 
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    if (!gladLoaderLoadGL()) 
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        glfwDestroyWindow(window);
        glfwTerminate();
        return -1;
    }

    glEnable(GL_DEPTH_TEST);
}


