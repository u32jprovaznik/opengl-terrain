#include "Macroneq.hpp"

namespace mrq
{
  namespace file
  {
    const char* getContents(const char* path)
    {
      std::ifstream file(path);
      if (!file.is_open())
      {
        std::cerr << "Error: Cannot read file " << path << std::endl;
        return nullptr;
      }

      // Getting the file length
      file.seekg(0, std::ios::end);
      const size_t length = file.tellg();
      file.seekg(0, std::ios::beg);

      // Allocating a buffer for the contents
      char* contents = new char[length + 1];
      contents[length] = '\0';

      // Reading and closing the file
      file.read(contents, length);
      file.close();

      return contents;
    }
  }
}
