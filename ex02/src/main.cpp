#include "Zombie.h"

#include <iostream>

int main() {
  int    zombie_count = 10;
  Zombie *zombies;

  zombies = zombieHorde(zombie_count, "Foo");
  for (int i = 0; i < zombie_count; ++i) {
    std::cout << zombies[i].getName() << std::endl;
  }
  delete[] zombies;

  return 0;
}
