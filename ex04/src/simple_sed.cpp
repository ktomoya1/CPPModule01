#include "simple_sed.h"

#include <iostream>
#include <fstream>
#include <string>

int simple_sed(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "Incorrect number of arguments" << std::endl;
    return 0;
  }

  std::ifstream input_file(argv[1]);
  if (input_file.fail()) {
    std::cerr << "Failed to open input file" << std::endl;
    return 1;
  }
  std::ofstream output_file((std::string(argv[1]) + ".replace").c_str());
  if (output_file.fail()) {
    std::cerr << "Failed to open output file" << std::endl;
    input_file.close();
    return 1;
  }

  std::string line;
  while (std::getline(input_file, line)) {
    line = replace_line(line, argv[2], argv[3]);
    output_file << line << std::endl;
  }
  input_file.close();
  output_file.close();
  return 0;
}
