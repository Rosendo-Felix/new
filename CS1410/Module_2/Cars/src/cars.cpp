#include "cars.h"
#include <iomanip>  // for formatted output
#include <iostream>

void ShowPrice(double value)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Car Value: " << value << std::endl;
}

void UpdatePrice(double &current_value, double new_value)
{
    //update current value which is passed by reference
    current_value = new_value;
}

int HorsePower()
{
    //return sedan horse power
    return kHorsepower;
}

//lamborghini
void lamborghini::ShowPrice(double value)
{
    //display input value in a fixed 2 decimal precission
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Car Value: " << value << std::endl;
}

void lamborghini::UpdatePrice(double &current_value, double new_value)
{
    //update current value to new value
    current_value = new_value;
}

//lambo HP
int lamborghini::HorsePower()
{
    //return constant value from lamborghini namespace
    return lamborghini::kHorsepower;
}

