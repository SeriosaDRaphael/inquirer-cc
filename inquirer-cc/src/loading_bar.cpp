#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include "loading_bar.h"

void loading_bar(int lb_size, int microseconds) {
  std::cout << "[";
  for(int i = 0; i < lb_size; ++i) {
    std::cout << "=";
    std::cout.flush();
    usleep(microseconds);
  }

  std::cout << "]";
  std::cout << "\n";
}