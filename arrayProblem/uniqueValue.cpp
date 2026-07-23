#include <iostream>

void uniqueValue(int numbers[], int size);

int main() {
  int numbers[] = {1, 2, 2, 3, 4};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  uniqueValue(numbers, size);
  return 0;
}

void uniqueValue(int numbers[], int size) {
  for (int i = 0; i < size; i++) {
    bool found = false;
    for (int j = 0; j < i; j++) {
      if (numbers[i] == numbers[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      std::cout << numbers[i] << " ";
    }
  }
}