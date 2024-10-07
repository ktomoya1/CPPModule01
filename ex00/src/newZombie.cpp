#include "Zombie.h"

Zombie* Zombie::newZombie(std::string name) {
  Zombie* zombie = nullptr;
  zombie = new Zombie();
  if (zombie == nullptr)
    return nullptr;
  zombie->set_name(name);
  return zombie;
}
