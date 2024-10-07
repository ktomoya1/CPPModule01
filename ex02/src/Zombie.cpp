#include "Zombie.h"

#include <iostream>
#include <string>

Zombie::~Zombie() {
  std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::announce() {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..."
            << std::endl;
  return;
}

void Zombie::setName(std::string& new_name) {
  this->name = new_name;
}

std::string Zombie::getName() {
  return this->name;
}
