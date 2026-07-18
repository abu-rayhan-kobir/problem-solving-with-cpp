#include <iostream>
#include <string>

int main()
{
  std::string goldBadge = "\"Gold\"";
  std::string silverBadge = "\"Silver\"";
  int quantityOfCup;
  std::cout << "Enter the quantity of cup: ";
  std::cin >> quantityOfCup;
  if (quantityOfCup > 20)
  {
    std::cout << "You have purchesed " << quantityOfCup << " cup of tea. So you ara a " << goldBadge << " customar." << std::endl;
  }
  else if (quantityOfCup >= 10 && quantityOfCup <= 20)
  {
    std::cout << "You have purchesed " << quantityOfCup << " cup of tea. So you ara a " << silverBadge << " customar." << std::endl;
  } else {
    std::cout << "You are a rgular customar." << std::endl;
  }
  return 0;
}