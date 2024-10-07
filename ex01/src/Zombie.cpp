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

std::string Zombie::getName() {
  return this->name;
}

Zombie* newZombie(std::string name) {
  return new Zombie(name);
}
