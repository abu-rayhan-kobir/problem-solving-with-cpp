#include <iostream>

void sumAndProductAnArray(int numbers[], int size);

int main () {
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;
  sumAndProductAnArray(numbers, 10);
  return 0;
}

void sumAndProductAnArray(int numbers[], int size) {
  int sum = 0;
  int product = 1;
  for (int index = 0; index < size; index++) {
    sum += numbers[index];
    product *= numbers[index];
  }
  std::cout << "Sum is: " << sum << std::endl;
  std::cout << "Product is: " << product << std::endl;
}