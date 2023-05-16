#ifndef EBO_HPP
#define EBO_HPP

#include <GL/glew.h>

class EBO
{
  private:
    GLuint ID;

  public:
    // Constructor
    EBO(GLuint indices[], GLsizeiptr size);

    // Accessors
    const GLuint getID() const;

    // Functions
    void Bind();
    void Unbind();
    void Delete();
};

#endif // EBO_HPP
