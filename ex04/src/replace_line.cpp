#include "simple_sed.h"

#include <string>

std::string replace_line(std::string line, const std::string& search_str, const std::string& replace_str) {
  size_t pos = 0;

  while (true) {
    pos = line.find(search_str, pos);
    if (pos == std::string::npos) {
      break;
    }
    line = line.substr(0, pos) + replace_str + line.substr(pos + search_str.length());
    pos += replace_str.length();
  }
  return line;
}
