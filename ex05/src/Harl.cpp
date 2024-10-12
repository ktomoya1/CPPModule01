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
  std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
