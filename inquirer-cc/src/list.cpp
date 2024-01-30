#include <iostream>
#include <algorithm>
#include "list.h"
#include "color.h"

void list(std::vector<std::string>options, std::string _default, int& var) {
  int ind;
  
  for(int i = 0; i < options.size(); i++) {
    std::cout << i+1 << " " << options[i] << "\n";
  }

  auto it = std::find(options.begin(), options.end(), _default);

  if(it != options.end()) {
    int index = std::distance(options.begin(), it);
    std::cout << DIM << "(" << index+1 << ")" << RESET <<"\n";
    ind = index;
  }

  std::cout << "Enter number: ";
  std::cin >>  var;

  if(var > options.size() || var < 1) {
    std::cout << "Number out of scope. Using default option.\n";
    var = ind+1;
  }

}