#include "Zombie.h"

#include <iostream>

int main() {
  int    zombie_count = 10;
  Zombie *zombies;

  zombies = zombieHorde(zombie_count, "Foo");
  for (int i = 0; i < zombie_count; ++i) {
    zombies[i].announce();
  }
  delete[] zombies;

  return 0;
}
