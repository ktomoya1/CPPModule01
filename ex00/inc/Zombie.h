#pragma once

#include <string>

class Zombie {
  public:
    Zombie() {}
    ~Zombie();

    Zombie*     newZombie(std::string name);
    void        randomChump(std::string name);
    void        announce();
    void        set_name(std::string& new_name);
    std::string get_name();

  private:
    std::string name;
};
