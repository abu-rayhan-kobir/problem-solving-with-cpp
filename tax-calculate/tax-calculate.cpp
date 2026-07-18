#include <iostream>

int main () {
  float teaPrice;
  int quantityOfTea;
  std::cout << "Enter the price of a tea cup: ";
  std::cin >> teaPrice;
  std::cout << "Enter the quantity of tea cups: ";
  std::cin >> quantityOfTea;
  const float totalPrice = teaPrice * quantityOfTea;
  const int discount = 10;
  const float totalPriceWithTax = totalPrice + ((float)(totalPrice * 10) / 100);
  std::cout << "Total price with tax is: " << totalPriceWithTax << std::endl;
  return 0;
}