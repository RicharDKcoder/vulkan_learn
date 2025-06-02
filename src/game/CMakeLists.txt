project(game)

#aux_source_directory( . SOURCE_FILE )
file(GLOB_RECURSE SOURCE_SRC "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCE_SRC})

add_custom_target(compile_shader ALL
    COMMAND ${CMAKE_SOURCE_DIR}/compile_shader.sh
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMENT "compile_shader"
)
add_dependencies(${PROJECT_NAME} compile_shader)

message("CMAKE_SOURCE_DIR" ${CMAKE_SOURCE_DIR})
message("CMAKE_BINARY_DIR" ${CMAKE_BINARY_DIR})
add_custom_target(copy_assets ALL
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/assets
        ${CMAKE_BINARY_DIR}/assets
        COMMENT "Copying assets into binary directory"
)
add_dependencies(${PROJECT_NAME} copy_assets)

target_link_libraries(${PROJECT_NAME} PRIVATE
        engine
)