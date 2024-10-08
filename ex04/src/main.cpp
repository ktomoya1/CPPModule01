#include <fstream>
#include <iostream>
#include <string>

std::string replace_line(std::string line, const std::string& search_str, const std::string& replace_str);

int main(int argc, char* argv[]) {
  if (argc != 4)
    return 0;

  std::ifstream input_file(argv[1]);
  std::ofstream output_file((std::string(argv[1]) + ".replace").c_str());

  std::string line;
  while (std::getline(input_file, line)) {
    line = replace_line(line, argv[2], argv[3]);
    output_file << line << std::endl;
  }
  return 0;
}

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

//int main() {
//  std::string line = "Hello World! World is beautiful!";
//  std::string s1 = "World";
//  std::string s2 = "C++";
//
//  std::string new_line = replace_line(line, s1, s2);
//  std::cout << new_line << std::endl;
//}
