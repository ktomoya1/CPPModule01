#include "Harl.h"

#include <iostream>
#include <string>

int Harl::ProgramStart(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Incorrect number of arguments" << std::endl;
    return 1;
  }

  this->complain(argv[1]);
  return 0;
}

void Harl::complain(std::string level) {
  void (Harl::*complaints[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  int levelIndex = 0;
  for (int i = 0; i < 4; ++i) {
    if (levels[i] == level) {
      break;
    }
    levelIndex++;
  }
  if (levelIndex >= 4) {
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
      return;
  }
  switch (levelIndex) {
    case DEBUG:
      (this->*complaints[0])();
    case INFO:
      (this->*complaints[1])();
    case WARNING:
      (this->*complaints[2])();
    case ERROR:
      (this->*complaints[3])();
    default:
      break;
  }
  return;
}

void Harl::debug() {
  std::cout << "[ DEBUG ]" << std::endl
            << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl
            << "I really do!" << std::endl << std::endl;
}

void Harl::info() {
  std::cout << "[ INFO ]" << std::endl
            << "I cannot believe adding extra bacon costs more money." << std::endl
            << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
            << std::endl << std::endl;
}

void Harl::warning() {
  std::cout << "[ WARNING ]" << std::endl
            << "I think I deserve to have some extra bacon for free." << std::endl
            << "I’ve been coming for years whereas you started working here since last month."
            << std::endl << std::endl;
}

void Harl::error() {
  std::cout << "[ ERROR ]" << std::endl
            << "This is unacceptable! I want to speak to the manager now."
            << std::endl << std::endl;
}
