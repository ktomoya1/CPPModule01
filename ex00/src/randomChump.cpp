#include "Zombie.h"

void Zombie::randomChump(std::string name) {
  Zombie* zombie = newZombie(name);
  zombie->announce();
  return;
}
