#include "../Headers/VAO.hpp"

// Constructor

VAO::VAO()
{
  glGenVertexArrays(1, &this->ID);
}

// Accessors

const GLuint VAO::getID() const
{
  return this->ID;
}

// Functions

void VAO::LinkAttrib(VBO& VBO, GLuint layout, GLuint size, GLenum type, GLsizei stride, const void* offset)
{
  VBO.Bind();
  glVertexAttribPointer(layout, size, type, GL_FALSE, stride, offset);
  glEnableVertexAttribArray(layout);
  VBO.Unbind();
}

void VAO::Bind()
{
  glBindVertexArray(this->ID);
}

void VAO::Unbind()
{
  glBindVertexArray(0);
}

void VAO::Delete()
{
  glDeleteVertexArrays(1, &this->ID);
}
