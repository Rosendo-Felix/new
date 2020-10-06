#include <iostream>
#include "cars.h"


int main()
{
    // Part 1: Regular Car
    //car value
    std::cout << "Part 1:" << std::endl;
    double sedan_value = 18500;
    ShowPrice(sedan_value);

    //update car value
    std::cout << "Updating price" << std::endl;
    UpdatePrice(sedan_value, 20340.9);
    ShowPrice(sedan_value);

    //show sedan horse power
    std::cout << "The horse power of a sedan is: " << HorsePower() << std::endl;

    // Part 2: Lamborghini Car
    std::cout << "\nPart 2:" << std::endl;
    double lambo_value = 18500;
    lamborghini::ShowPrice(lambo_value);

    //update lambo price
    std::cout << "Updating price:" << std::endl;
    lamborghini::UpdatePrice(lambo_value, 20340.99);
    lamborghini::ShowPrice(lambo_value);

    //lambo HP
    std::cout << "The horse power of a lambo is: " << lamborghini::HorsePower() << std::endl;
    return 0;
}
