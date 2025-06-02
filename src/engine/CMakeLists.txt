project(engine)

file(GLOB_RECURSE SOURCE_INC "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp")
file(GLOB_RECURSE SOURCE_SRC "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")


find_package(Vulkan REQUIRED)
if (Vulkan_FOUND)
    message("vulkan is find success ! ${Vulkan_INCLUDE_DIRS}")
endif ()
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(Stb REQUIRED)

add_library(${PROJECT_NAME} ${SOURCE_INC} ${SOURCE_SRC})

target_include_directories(${PROJECT_NAME} PRIVATE
        ${Stb_INCLUDE_DIR}
        ${Vulkan_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
        Vulkan::Vulkan
        glfw
        glm::glm
        imgui::imgui
)