#include "Harl.h"

#include <iostream>
#include <string>

void Harl::complain(std::string level) {
  void (Harl::*complaints[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (int i = 0; i < 4; ++i) {
    if (levels[i] == level) {
      (this->*complaints[i])();
      return;
    }
  }
  std::cout << "Invalid level" << std::endl;
  return;
}

void Harl::debug() {
  std::cout << "debug" << std::endl;
}

void Harl::info() {
  std::cout << "info" << std::endl;
}

void Harl::warning() {
  std::cout << "warning" << std::endl;
}

void Harl::error() {
  std::cout << "error" << std::endl;
}
