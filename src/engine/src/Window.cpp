//
// Created by docryze on 2025/6/2.
//

#include "Window.hpp"

namespace engine {
    Window::Window() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        this->id = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);
    }


    Window::~Window() {
    }

    bool Window::shouldClose()  {
        return glfwWindowShouldClose(this->id);
    }

    void Window::pullEvents() {
        glfwPollEvents();
    }

    void Window::close() {
        glfwDestroyWindow(this->id);
        glfwTerminate();
    }
}

