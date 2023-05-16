#ifndef VAO_HPP
#define VAO_HPP

#include <GL/glew.h>

#include "VBO.hpp"

class VAO
{
  private:
    GLuint ID;

  public:
    // Constructor
    VAO();

    // Accessors
    const GLuint getID() const;

    // Functions
    void LinkAttrib(VBO& VBO, GLuint layout, GLuint size, GLenum type, GLsizei stride, const void* offset);
    void Bind();
    void Unbind();
    void Delete();
};

#endif // VAO_HPP
