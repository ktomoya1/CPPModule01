#pragma once

#include <iostream>
#include <string>

class Harl {
  public:
    enum Level {
      DEBUG = 0,
      INFO,
      WARNING,
      ERROR,
    };

    int   ProgramStart(int argc, char* argv[]);
    void  complain(std::string level);

  private:
    void debug();
    void info();
    void warning();
    void error();
    void insignificant();
};
