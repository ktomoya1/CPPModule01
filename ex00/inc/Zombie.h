#pragma once

#include <string>

class Zombie {
  public:
    Zombie(const std::string& new_name);
    ~Zombie();

    void        announce();
    std::string get_name();

  private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
