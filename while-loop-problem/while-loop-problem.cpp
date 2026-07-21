#include <iostream>

int main () {
  int numberOfCups = 10;
  while (numberOfCups >= 0) {
    std::cout << "Cups Remain => " << numberOfCups << std::endl;
    --numberOfCups; 
  }
  return 0;
}