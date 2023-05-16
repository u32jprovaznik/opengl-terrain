#ifndef VBO_HPP
#define VBO_HPP

#include <GL/glew.h>

class VBO
{
  private:
    GLuint ID;

  public:
    // Constructor
    VBO(GLfloat vertices[], GLsizeiptr size);

    // Accessors
    const GLuint getID() const;

    // Functions
    void Bind();
    void Unbind();
    void Delete();
};

#endif // VBO_HPP
