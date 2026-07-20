#include <iostream>

int main () {
  unsigned int choice;
  float price;
  std::cout << "Enter your choice: " << std::endl;
  std::cout << "Press 1 for Green Tea: " << std::endl;
  std::cout << "Press 2 for Black Tea: " << std::endl;
  std::cout << "Press 3 for Oolong Tea: " << std::endl;
  std::cin >> choice;
  switch (choice)
  {
  case 1:
    price = 2;
    break;
  case 2:
    price = 3;
    break;
  case 3:
    price = 4;
    break;
  default:
    break;
  }
  std::cout << "The price is: " << price << std::endl;
  return 0;
}