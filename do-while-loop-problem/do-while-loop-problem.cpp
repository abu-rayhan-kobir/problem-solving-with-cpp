#include <iostream>
#include <string>

int main () {
  std::string decision;
  do {
    std::cout << "Do you want more tea? (answer: yes for (\"y/Y\") and no for \"n/N\"):";
    std::cin >> decision;
  } while (decision == "y" || decision == "Y");
  return 0;
}