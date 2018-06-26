#include "ContextGLFW.hpp"

int main() {
    const GLuint WINDOW_WIDTH = 800;
    const GLuint WINDOW_HEIGHT = 600;
    ogl::ContextGLFW context(WINDOW_WIDTH, WINDOW_HEIGHT);
    context.print_info();

    context.loop();

    return 0;
}
