#include <iostream>
#include "separator.h"

void separator(int sep_size) {
  for(int i =0; i < sep_size; i++) {
    std::cout << "=";
  }

  std::cout << "\n";
}