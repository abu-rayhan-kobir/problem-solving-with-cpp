#include <iostream>

int main () {
  unsigned int cups;
  std::cout << "Enter the number of cups that you want to take: ";
  std::cin >> cups;
  if (cups >= 10 && cups <= 20) {
    std::cout << "You are eligible for 10% discount!";
  } else if (cups > 20) {
    std::cout << "You are eligible for 20% discount!";
  } else {
    std::cout << "You are not eligible for any discount!";
  }
  return 0;
}