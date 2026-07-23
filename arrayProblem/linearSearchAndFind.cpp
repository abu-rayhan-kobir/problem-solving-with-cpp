#include <iostream>

int main () {
  int numbers[] = {4, 2, 7, 8, 1, 2, 5};
  int tartet = 8;
  int length = sizeof(numbers) / sizeof(numbers[0]);
  for (int index = 0; index < length; index++) {
    if (numbers[index] == tartet) {
      std::cout << "Find target on position: " << index << std::endl;
    }
  }
  std::cout << "Target not exist in this provided array" << std::endl;
  return 0;
}