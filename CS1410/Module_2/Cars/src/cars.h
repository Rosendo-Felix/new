#ifndef CARS_H_
#define CARS_H_

//sedan horsepower
const int kHorsepower = 120;

//sedan price
void ShowPrice(double value);
void UpdatePrice(double &current_value, double new_value);
//sedan HP
int HorsePower();

//lamborghini namespace
namespace lamborghini
{
    const int kHorsepower = 759;
    void ShowPrice(double value);
    void UpdatePrice(double &current_value, double new_value);
    int HorsePower();
}

#endif /* !CARS_H_ */
