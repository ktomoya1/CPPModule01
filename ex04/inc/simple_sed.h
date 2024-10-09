#pragma once

#include <fstream>
#include <iostream>
#include <string>

int         simple_sed(int argc, char* argv[]);
std::string replace_line(std::string line, const std::string& search_str, const std::string& replace_str);
