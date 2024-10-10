#include "Weapon.h"
#include "HumanA.h"

#include <iostream>
#include <string>

HumanA::HumanA(const std::string& name, Weapon& weapon) : name_(name), weapon_(weapon) {}

void HumanA::attack() {
  std::cout << this->name_ << " attacks with their "
            << this->weapon_.getType() << std::endl;
}
