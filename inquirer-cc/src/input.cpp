#include <iostream>
#include "input.h"
#include "color.h"

void input(std::string question, std::string _default, std::string &var) {
  std::cout << GREEN << "? " << RESET << question << " " << DIM << "(" << _default << ") " << RESET;
  std::getline(std::cin, var);
}