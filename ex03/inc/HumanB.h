#pragma once

#include "Weapon.h"

#include <iostream>
#include <string>

class HumanB {
  public:
    HumanB(const std::string& name) : name_(name) {}

    ~HumanB() {}

    void attack();
    void setWeapon(Weapon& weapon);

  private:
    const std::string name_;
    Weapon*           weapon_;
};
