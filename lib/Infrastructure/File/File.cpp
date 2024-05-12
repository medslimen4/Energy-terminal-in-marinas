
#include "./File.hpp"

File::File()
{
  file = new File(); // Initialize the File pointer
}

File::~File()
{
  delete file; // Clean up the File pointer in the destructor
}

std::string File::readFile()
{
  if (LittleFS.begin())
  {
    *file = LittleFS.open("/data.txt", "r");
    if (*file)
    {
      String content;
      while (file->available())
      {
        content += file->readStringUntil('\n');
      }
      file->close();
      return content;
    }
    else
    {
      return "Error: Unable to open the file.";
    }
  }
  else
  {
    return "Error: Unable to initialize LittleFS.";
  }
}

void File::saveFile()
{
  if (LittleFS.begin())
  {
    *file = LittleFS.open("/data.txt", "w");
    if (*file)
    {
      // Write file content here
      file->println("File content");
      file->close();
    }
    else
    {
      Serial.println("Error: Unable to open the file.");
    }
  }
  else
  {
    Serial.println("Error: Unable to initialize LittleFS.");
  }
}
