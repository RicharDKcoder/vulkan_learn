SHADER_DIR="assets/shader"

glslc ${SHADER_DIR}/default.vert -o ${SHADER_DIR}/default_vert.spv
glslc ${SHADER_DIR}/default.frag -o ${SHADER_DIR}/default_frag.spv