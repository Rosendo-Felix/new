# TRY-IT-OUT: CARS

In this exercise, we will use cars and Lamborghinis to work on our skills with functions and namespaces. 
We will also begin using std:: instead of including the entire header file.

### Files to work on

All the functions you write, will be part of the `stock` library. The library consist of these two files:

- `src/cars.cpp`
- `src/cars.h`
- Your "driver" or application will be in `src/main.cpp`.

Please **DO NOT MODIFY** any other files. Modifying any other file may result 
in the unit tests not passing.

---

## Part 1: Sedan Auto Dealer

Your first task is to create a program for a small auto dealer. You will create a library with a few function to show some of the car's characteristics.

### Part 1.1: Show Car Price

Write a function to show the current car's price. Your function should take the cost of the car as an input parameter. The parameter should be taken `by value`. Your function signature is:

```cpp
// cars.h
void ShowPrice(double value);
```

Since we are taking a floating point value, we want to have some control on the output. Specifically, we want to make sure your value is displayed with 2 decimal values only. Use the `<iomanip>` library to set your string's output.
Also, since we know we will be working with other `namesapces`, we will NOT use the

```cpp
using namespace std;
```

This means, that any function defined in the `std` namespace needs to be prefix with the `std::`. For example, `cout` will be written as `std::cout`.

Your implementation file should look like this:

```cpp
// cars.cpp
#include <iostream>
#include <iomanip>  // for formatted output
#include "cars.h"   // car's library
// NO namespace std;

/**
 * @brief Display Car's Value
 *
 * @param value: Car's value
 */
void ShowPrice(double value)
{
    // Display input value in a fixed 2 decimal precision
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Car Value: " << value << std::endl;
}
```

Now, lets test the code in the `main()` function. Once again, DO NOT use `namesapce std` in your main file.

```cpp
#include <iostream>
#include "cars.h"

int main()
{
    // Part 1: Regular Car
    std::cout << "Part 1:" << std::endl;
    double sedan_value = 18500;
    ShowPrice(sedan_value);

    return 0;
}
```

#### Run Part 1.1

From the dropdown select main and run.

#### Sample Output Part 1.1

```bash
Part 1:
Car Value: 18500.00

# Note: See the output notation is fixed with 2 decimals.
```

### Part 1.2: Update Car Price

Next, you are required to add another function to your library to update the current price of your vehicle. For this. define a function that takes two input parameters, the current value, and the new value.

```cpp
// cars.h

void UpdatePrice(double &curent_value, double new_value);
```

Function breakdown:

- `void`: return value from the function, in this case void means nothing to return.
- `UpdatePrice`: is the function name
- `(double &curent_value, double new_value)`: takes two input parameters.
  - First parameter: double variable taken by `reference`. This means we get the address of the original variable, which enable us to modify the value inside the function.
  - Second parameter: double variable taken by `value`. This means we get a copy of the original value.

Now, define the function in our implementation file: `cars.cpp`.

```cpp
// cars.cpp

/**
 * @brief Update current car's value to new value
 *
 * @param curent_value: old value
 * @param new_value : new value
 */
void UpdatePrice(double &curent_value, double new_value)
{
    // Update Current value.
    // Remember current_value is pass by reference
    curent_value = new_value;
}
```

Now, test is in your `main()` function

```cpp
    std::cout << "Part 1:" << std::endl;
    double sedan_value = 18500;
    ShowPrice(sedan_value);
    std::cout << "Updating price" << std::endl;
    UpdatePrice(sedan_value, 20340.9);
    ShowPrice(sedan_value);
```

#### Run Part 1.2

From the dropdown select main and run.

#### Sample Output Part 1.2

```bash
Part 1:
Car Value: 18500.00
Updating price
Car Value: 20340.90
```

### Part 1.3: Get Car Horsepower

Finally, you need to create another function that will `return` the car's horsepower. Your function will not take any input parameters, but it needs to return the car's horsepower. You need to define the horsepower's value as a constant in your library's header file

```cpp
// cars.h
const int kHorsepower = 120;
// ...
int HorsePower();
```

Function breakdown:

- `int`: return value from the function, in this case `int` means you need to return an integer value to the caller.
- `HorsePower`: is the function name
- `()`: takes no input parameters.

Now, define the function in our implementation file: `cars.cpp`.

```cpp
/**
 * @brief Display car's horse power
 *
 * @return int
 */
int HorsePower()
{
    // Return horse power
    return kHorsepower;   // this is the constant value defined in cars.h
}
```

#### Run Part 1.3

From the dropdown select main and run.

#### Sample Output Part 1.3

```bash
Part 1:
Car Value: 18500.00
Updating price
Car Value: 20340.90
The horse power of a sedan is: 120
```

---

## Part 2: Lamborghini Auto Dealer

Now, you are expanding the include the sale of luxury cars. Your next task is to update your `cars library` to include `lamborghini` cars as well. To accomplish this, we want to reuse as much of the code we currently have, but under a new `namespace` to avoid name collision.

### Part 2.1: Show Car Price

Begin by defining the same `ShowPrice()` function, but under a new `namespace`. In this case, we will create the `namespace lamborghini` for all the functions of this task.

```cpp
// cars.h
// ...
namespace lamborghini
{
void ShowPrice(double value);
}  // namespace lamborghini

```

Remember that by creating a new namespace, we could reuse the functions names. Now, in your implementation file, define your function. Remember to prefix the the function name with the corresponding namespace.

```cpp
void lamborghini::ShowPrice(double value)
{
    // Display input value in a fixed 2 decimal precission
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Car Value: " << value << std::endl;
}
```

Now, test it in your `main` function. In order to avoid name collision between the two `ShowPrice()` function, remember to prefix the namespace `lamborghini` to differentiate between them.

```cpp
// main.cpp
    // ...
    std::cout << "\nPart 2:" << std::endl;
    double lambo_value = 18500;
    lamborghini::ShowPrice(lambo_value);
```

#### Run Code Part 2.1

From the dropdown select main and run.

#### Sample Output Part 2.1

```bash
# ... output from Part 1
Part 2:
Car Value: 18500.00
```

### Part 2.2: Update Car Price

Follow the same logic as in [Part 1.2] but for the `lamborghini` namespace.

```cpp
// cars.h
namespace lamborghini
{
void ShowPrice(double value);
void UpdatePrice(double &curent_value, double new_value);
}  // namespace lamborghini
```

Now, define it in your implementation file

```cpp
// cars.cpp
void lamborghini::UpdatePrice(double &curent_value, double new_value)
{
    // Current value is update
    curent_value = new_value;
}
```

Now, test is `main() function`.

```cpp
    std::cout << "\nPart 2:" << std::endl;
    double lambo_value = 18500;
    lamborghini::ShowPrice(lambo_value);
    std::cout << "Updating price" << std::endl;
    lamborghini::UpdatePrice(lambo_value, 20340.99);
```

#### Run Part 2.2

From the dropdown select main and run.

#### Sample Output Part 2.2

```bash
# ... Part 1 output
Part 2:
Car Value: 18500.00
Updating price
Car Value: 20340.99
```

### Part 2.3: Get Car Horsepower

Repeat the procedure from [Part 1.3] but for the `lamborghini` namespace. Make sure you update the horse power to `759` for this car.

```cpp
// cars.h
namespace lamborghini
{
const int kHorsepower = 759;
void ShowPrice(double value);
void UpdatePrice(double &curent_value, double new_value);
int HorsePower();
}  // namespace lamborghini
```

Now define your function in the implementation file

```cpp
int lamborghini::HorsePower()
{
    // return constant value from lamborghini namespace
    return lamborghini::kHorsepower;
}
```

Finally, test it in `main()` function

```cpp
    std::cout << "\nPart 2:" << std::endl;
    double lambo_value = 18500;
    lamborghini::ShowPrice(lambo_value);
    std::cout << "Updating price" << std::endl;
    lamborghini::UpdatePrice(lambo_value, 20340.99);
    lamborghini::ShowPrice(lambo_value);
    std::cout << "The horse power of a lambo is: " << lamborghini::HorsePower() << std::endl;
```

#### Run Part 2.3

From the dropdown select main and run.

#### Sample Output Part 2.3

```bash
# ... Part 1 output
Part 2:
Car Value: 18500.00
Updating price
Car Value: 20340.99
The horse power of a lambo is: 759
```


## Validate your code

Once you are satisfied with your work, run the unit test file:

From the dropdown select main_test and run.

Sample output:

Tests passed: 6 of 6 tests

---

## Submit your code

Zip your src folder and submit in Canvas.

---