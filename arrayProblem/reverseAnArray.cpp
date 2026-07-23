#include <iostream>

void reverseArray(int numbers[], int size); 

int main () {
  int numbers[6] = {1, 2, 3, 4, 5, 6};
  int size = 6;
  for (int index = 0; index < size; index++) {
    std::cout << numbers[index] << " ";
  }
  std::cout << std::endl;
  reverseArray(numbers, 6);
  for (int index = 0; index < size; index++) {
    std::cout << numbers[index] << " ";
  }
  std::cout << std::endl;
  return 0;
}

void reverseArray(int numbers[], int size){
  int i = 0;
  int j = size - 1;
  while (i < j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
    i++;
    j--;
  }
}