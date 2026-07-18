#include <iostream>
#include <string>

int main () {
    float cupPrice = 10.50;
    int cupQuantity;
    std::cout << "Enter how much cup you needed: ";
    std::cin >> cupQuantity;
    const float totalPrice = cupPrice * cupQuantity;
    if (totalPrice >= 100) {
        const int discrount = 5;
        const float priceWithDiscrount = totalPrice - ((totalPrice * discrount) / 100);
        std::cout << "Your cost is " << totalPrice << " so you are applicable for 5% discound. So you have to pay " << priceWithDiscrount << " Tk." << std::endl;
    } else {
        std::cout << "You have to pay " << totalPrice << " Tk." << std::endl;
    }
    return 0;
}