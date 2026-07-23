#include <iostream>

int main () {
  int numbers[] = {5, 15, 22, 1, -15, 24};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  int largestNumber = INT_MIN;
  for (int index = 0; index < length; index++) {
    if (numbers[index] > largestNumber) {
      largestNumber = numbers[index];
    }
  }
  std::cout << "Largest number: " << largestNumber << std::endl;
  return 0;
}