#include <iostream>

void changeArray(int numbers[], int size);

int main () {
  int numbers[5] = {1, 2, 3, 4, 5};
  int size = 5;
  for (int index = 0; index < size; index++) {
    std::cout << numbers[index] << " ";
  }

  changeArray(numbers, 5);
  std::cout << std::endl;
  for (int index = 0; index < size; index++) {
    std::cout << numbers[index] << " ";
  }
  return 0;
}

void changeArray(int numbers[], int size) {
  for (int index = 0; index < size; index++) {
    numbers[index] = numbers[index] * 2;
  }
}
