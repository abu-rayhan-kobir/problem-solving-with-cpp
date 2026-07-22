#include <iostream>

int main () {
  int count = 1;
  while (count < 100) {
    std::cout << count << std::endl;
    count += 3;
  }
  return 0;
}