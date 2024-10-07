#include "Zombie.h"

#include <iostream>

Zombie::~Zombie() {
  std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::announce() {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..."
            << std::endl;
  return;
}

std::string Zombie::get_name() {
  return this->name;
}
