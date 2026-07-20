#include <iostream>

int main () {
  unsigned int cups;
  float pricePerCup = 2.51;
  float discount;
  std::cout << "Enter the number of cup that you want to take: ";
  std::cin >> cups;
  if (cups >= 10 && cups <= 20) {
    discount = 0.1;
  } else if (cups > 20) {
    discount = 0.2;
  } else {
    discount = 0;
  }
  double totalPrice = pricePerCup * cups;
  double discountedPrice = totalPrice - (discount * totalPrice);
  std::cout << "Now, You have to pay: " << discountedPrice << std::endl;
  return 0;
}