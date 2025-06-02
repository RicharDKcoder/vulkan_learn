project(game)

#aux_source_directory( . SOURCE_FILE )
file(GLOB_RECURSE SOURCE_SRC "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCE_SRC})

target_link_libraries(${PROJECT_NAME} PRIVATE
        engine
)