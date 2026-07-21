#include <iostream>
#include <string>

int main () {
  std::string brewingInstruction = "1. Boil fresh water.\n2. Place 1 tea bag.\n3.Pour the hot water over the tea.\n4. Let the tea steep.\n\tBlack tea: 3-5 minutes.\n\tGreen tea: 2-3 minutes\n\tHerbal tea: 5-7 minutes.\n5. Remove the tea bag or strain the loose leaves.\n6. Add milk, sugar, honey, or lemon if desired.\n7. Stir well.\n8. Serve and enjoy your tea.";
  std::cout << brewingInstruction << std::endl;
  for (unsigned int count = 0; count <= 5; count ++) {
    std::cout << brewingInstruction << std::endl;
    std::cout << "Tea prepared for take!" << std::endl;
    std::cout << "\n";
  }
  return 0;
}