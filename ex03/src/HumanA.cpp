#include "Weapon.h"
#include "HumanA.h"

#include <iostream>
#include <string>

void HumanA::attack() {
  std::cout << this->name_ << " attacks with their "
            << this->weapon_.getType() << std::endl;
}
