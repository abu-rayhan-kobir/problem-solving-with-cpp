#include <iostream>

int main () {
  int numbers[] = {12, 14, 16, 18};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  for (int index = 0; index < length; index++) {
    std::cout << numbers[index] << std::endl;
  }
  return 0;
}