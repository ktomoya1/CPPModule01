#pragma once

#include <string>

class Weapon {
  public:
    Weapon(const std::string& type);

    ~Weapon() {}

    const std::string& getType();
    void               setType(const std::string& type);

  private:
    std::string type_;
};
