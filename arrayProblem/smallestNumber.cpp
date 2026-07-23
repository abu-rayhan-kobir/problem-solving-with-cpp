#include <iostream>

int main () {
  int numbers[] = {5, 15, 22, 1, -15, 24};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  int smallest = INT_MAX;
  for (int index = 0; index < length; index++) {
    if (numbers[index] < smallest) {
      smallest = numbers[index];
    }
  }
  std::cout << smallest << std::endl;
  return 0;
}