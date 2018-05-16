#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

    // Define a 3D cube (6 faces made of 2 triangles composed by 3 vertices)
 
    static const GLfloat cube[] =
        {
            // positions    // texture coordinates
            -20, -20, -20,  0, 0,
            -20,  20, -20,  1, 0,
            -20, -20,  20,  0, 1,
            -20, -20,  20,  0, 1,
            -20,  20, -20,  1, 0,
            -20,  20,  20,  1, 1,

             20, -20, -20,  0, 0,
             20,  20, -20,  1, 0,
             20, -20,  20,  0, 1,
             20, -20,  20,  0, 1,
             20,  20, -20,  1, 0,
             20,  20,  20,  1, 1,

            -20, -20, -20,  0, 0,
             20, -20, -20,  1, 0,
            -20, -20,  20,  0, 1,
            -20, -20,  20,  0, 1,
             20, -20, -20,  1, 0,
             20, -20,  20,  1, 1,

            -20,  20, -20,  0, 0,
             20,  20, -20,  1, 0,
            -20,  20,  20,  0, 1,
            -20,  20,  20,  0, 1,
             20,  20, -20,  1, 0,
             20,  20,  20,  1, 1,

            -20, -20, -20,  0, 0,
             20, -20, -20,  1, 0,
            -20,  20, -20,  0, 1,
            -20,  20, -20,  0, 1,
             20, -20, -20,  1, 0,
             20,  20, -20,  1, 1,

            -20, -20,  20,  0, 0,
             20, -20,  20,  1, 0,
            -20,  20,  20,  0, 1,
            -20,  20,  20,  0, 1,
             20, -20,  20,  1, 0,
             20,  20,  20,  1, 1
        };