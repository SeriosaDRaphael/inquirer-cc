#include <iostream>
#include <limits>
#include "multi_options.h"

void multi_options(std::vector<std::string> options, std::vector<std::string>& response, int to_choose) {
  for(int i = 0; i < options.size(); i++) {
    std::cout << i+1 << " " << options[i] << std::endl;
  }

  for(int i = 0; i < to_choose; i++) {
    int current_option;
    std::cout << "Enter input #" << i +1 << ": ";
    std::cin >> current_option;

    if(current_option <= options.size() && current_option >= 1) {
      response.push_back(options[current_option-1]);
    } else {
      std::cout << "Invalid option.\n";
      i--;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
}