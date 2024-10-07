#pragma once

#include <string>

class Zombie {
  public:
    Zombie() {}

    ~Zombie();

    void        announce();
    void        setName(std::string& new_name);
    std::string getName();

  private:
    std::string name;
};

Zombie* zombieHorde(int N, std::string name);
