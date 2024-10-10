#include "Weapon.h"
#include "HumanB.h"

#include <iostream>
#include <string>

HumanB::HumanB(const std::string& name) : name_(name), weapon_(NULL) {};

void HumanB::attack() {
  if (!this->weapon_) {
    std::cout << this->name_ << " has no weapon"
              << std::endl;
    return;
  }
  std::cout << this->name_ << " attacks with their "
            << this->weapon_->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) { this->weapon_ = &weapon; }
