#include <iostream>


int main () {
  unsigned int time;
  std::cout << "Enter your time for take tea: ";
  std::cin >> time;
  if (time >= 6 && time <= 8) {
    std::cout << "The shop is open!" << std::endl;
  } else {
    std::cout << "The shop is closed!" << std::endl;
  }
  return 0;
}