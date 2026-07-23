#include <iostream>


void swapMaxAndMin(int numbers[], int size);

int main () {
  int numbers[] = {22, 90, -30, 22, 55, 2, 98};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  for (int index = 0; index < size; index++) {
    std::cout << numbers[index] << " ";
  }
  std::cout << std::endl;
  swapMaxAndMin(numbers, size);
  std::cout << std::endl;
  for (int index = 0; index < size; index++) {
    std::cout << numbers[index] << " ";
  }
  return 0;
}

void swapMaxAndMin(int numbers[], int size) {
  int maxValue = INT_MIN;
  int minValue = INT_MAX;
  int maxValueIndex, minValueIndex;
  for (int index = 0; index < size; index++) {
    if (numbers[index] > maxValue) {
      maxValue = numbers[index];
      maxValueIndex = index;
    }
    if (numbers[index] < minValue) {
      minValue = numbers[index];
      minValueIndex = index;
    }
  }
  numbers[minValueIndex] = maxValue;
  numbers[maxValueIndex] = minValue;
  std::cout << "Maximum value: " << maxValue << std::endl;
  std::cout << "Minimum value: " << minValue << std::endl;
}