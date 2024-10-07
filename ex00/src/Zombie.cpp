#include "Zombie.h"

#include <iostream>

Zombie::~Zombie() {
  std::cout << this->name << "was Destructed"
            << std::endl;
  delete this;
}

void Zombie::announce() {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..."
            << std::endl;
  return;
}

void Zombie::set_name(std::string& new_name) {
  this->name = new_name;
}

std::string Zombie::get_name() {
  return this->name;
}
