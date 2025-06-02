#include <iostream>

#include "Window.hpp"

int main() {
    engine::Window window;

    while (!window.shouldClose()) {
        window.pullEvents();
    }

    window.close();
    return 0;
}
