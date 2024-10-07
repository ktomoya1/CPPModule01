#pragma once

#include <string>

class Zombie {
  public:
    Zombie(const std::string& new_name) : name(new_name) {}
    ~Zombie();

    void        announce();
    std::string getName();

  private:
    std::string name;
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
