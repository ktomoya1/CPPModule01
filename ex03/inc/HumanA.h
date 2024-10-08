#pragma once

#include "Weapon.h"

#include <iostream>
#include <string>

class HumanA {
  public:
    HumanA(const std::string& name, Weapon& weapon) : name_(name), weapon_(weapon) {}

    ~HumanA() {}

    void attack();

  private:
    const std::string name_;
    Weapon&           weapon_;
};
