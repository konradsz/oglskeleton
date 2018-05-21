cmake_minimum_required(VERSION 2.8)

project(oglskeleton)

set (CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE src_files ${PROJECT_SOURCE_DIR}/src/*)
add_executable(app ${src_files})

find_package(OpenGL REQUIRED)
if (OpenGL_FOUND)
    include_directories( ${OPENGL_INCLUDE_DIRS} )
    target_link_libraries(app ${OPENGL_LIBRARIES})
endif()

find_package(GLUT REQUIRED)
if (GLUT_FOUND)
    include_directories(${GLUT_INCLUDE_DIRS})
    target_link_libraries(app ${GLUT_LIBRARY})
endif()

find_package(GLEW REQUIRED)
if (GLEW_FOUND)
    include_directories(${GLEW_INCLUDE_DIRS})
    target_link_libraries(app ${GLEW_LIBRARIES})
endif()

find_package(glfw3 REQUIRED)
if (glfw3_FOUND)
    include_directories(${GLFW_INCLUDE_DIRS})
    target_link_libraries(app ${GLFW_LIBRARIES})
endif()

