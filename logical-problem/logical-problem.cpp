#include <iostream>
#include <string>

int main () {
  std::string isStudent;
  int cupsQuantity;
  std::cout << "Are you a student? (enter \"yes\" or \"no\"): ";
  std::getline(std::cin, isStudent);
  std::cout << "Enter the cup of tea: ";
  std::cin >> cupsQuantity;
  if (isStudent == "yes" && cupsQuantity > 15) {
    std::cout << "You are applicable for discount!";
  } else {
    std::cout << "You are not applicable for discount!";
  }
  return 0;
}