#ifndef SHADER_HPP
#define SHADER_HPP

#include <GL/glew.h>

#include "../Utils/Macroneq.hpp"

class Shader
{
  private:
    GLuint ID;

  public:

    // Constructor
    Shader(const char* vertexPath, const char* fragmentPath);

    // Accessors
    const GLuint getID() const;

    // Functions
    void Activate();
    void Delete();
};

#endif // SHADER_HPP
