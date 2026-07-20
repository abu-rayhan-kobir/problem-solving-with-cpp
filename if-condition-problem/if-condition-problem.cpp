#include<iostream>
#include<string>

int main() {
  std::string teaOrder;
  std::cout << "Enter your tea order: ",
  std::getline(std::cin, teaOrder);
  if (teaOrder == "green tea") {
    std::cout << "Green Tea is prepared!" << std::endl;
  }
  return 0;
}