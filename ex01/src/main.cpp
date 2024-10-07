#include "Zombie.h"

int main() {
  Zombie *zombie;

  zombie = newZombie("Foo");
  zombie->announce();
  delete zombie;

  randomChump("Bar");

  return 0;
}
