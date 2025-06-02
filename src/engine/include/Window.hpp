//
// Created by docryze on 2025/6/2.
//

#ifndef WINDOW_HPP
#define WINDOW_HPP
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace engine {
    class Window {
    public:
        Window();
        ~Window();

        bool shouldClose() ;
        void pullEvents() ;
        void close() ;
    private:
        GLFWwindow* id;
    };
}

#endif //WINDOW_HPP
