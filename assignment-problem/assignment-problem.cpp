#include <iostream>

int main () {
  int minTeaBags = 10;
  int buyerTeaBags;
  std::cout << "Enter the number of tea bags: ";
  std::cin >> buyerTeaBags;
  if (buyerTeaBags < 10) {
    buyerTeaBags += 5;
    std::cout << "You have entered the quantities of bags greater then " << minTeaBags << " so I added 5 bags and total bags is " << buyerTeaBags << std::endl; 
  } else {
    std::cout << "You have entered the quantities of bags is " << buyerTeaBags << std::endl;
  }
  return 0;
}