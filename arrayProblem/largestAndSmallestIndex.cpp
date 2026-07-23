#include <iostream>

int main () {
  int numbers[] = {12, -11, 22, 33, 45};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  int smallestNumber = INT_MAX;
  int largestNumber = INT_MIN;
  int largestNumberPosition;
  int smallestNumberPosition;
  for (int index = 0; index < length; index++) {
    if (numbers[index] < smallestNumber) {
      smallestNumber = numbers[index];
      smallestNumberPosition = index;
    }
    if (numbers[index] > largestNumber) {
      largestNumber = numbers[index];
      largestNumberPosition = index;
    }
  }
  std::cout << "Position of largest number: " << largestNumberPosition << std::endl;
  std::cout << "Position of smallest number: " << smallestNumberPosition << std::endl;
  return 0;
}