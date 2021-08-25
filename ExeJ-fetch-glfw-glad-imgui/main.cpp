/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"

#include <GLFW/glfw3.h>

int main()
{
    std::cout << "[C++.ExeD] main.cpp" << "\n";

    /*
    * Initialize GLFW window
    */
   GLFWwindow* window;

    /* Initialize the library */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if(!window)
    {
        glfwTerminate();
        return -1;
    }
    
    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while(!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
}