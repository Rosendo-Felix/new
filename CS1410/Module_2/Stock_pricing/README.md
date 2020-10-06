# TRY-IT-OUT: STOCK PRICING

In this exercise, we will discuss using `C++ arrays` alone and with functions.

---

### Files to work on

The functions you write will be part of the `stock` library. The library consist of these two files:

- `src/stock.cpp`
- `src/stock.h`
- Your "driver" or application will be in `src/main.cpp`.

Please **DO NOT MODIFY** any other files. Modifying any other file may result 
in the unit tests not passing.

---

## Part 1: Display Array Elements

Our first task consists of displaying the current value of our "stock portfolio". Begin by declaring a function that takes the array of values as an input parameter.

```cpp
// stock.h

void ShowStock(const std::array<double, STOCKS> &portfolio);
```

Function breakdown:

- `void`: return value from the function, in this case void means nothing to return.
- `ShowStock`: is the function name
- `(const std::array<double, STOCKS> &portfolio)`: takes one parameter by `reference`. More detail in the next try-it-out activity. The keyword `const` states this is a "read only" parameter.

Now, define the function in our implementation file: `game.cpp`. For this function we will use the new `C++ for` loop

```cpp
// stock.cpp

/**
 * @brief Display portfolio values
 *
 * @param portfolio: array with stock values
 */
void ShowStock(const std::array<double, STOCKS> &portfolio)
{
    cout << "Stock value:" << endl;
    // ...
    // For each loop
    for (auto value : portfolio)
    {
        // Note: each value should be separated by ONE space including the last member.
        // .. display values
    }
    // ...
}

```

 To test this code, define the following array in your `main()` function

 ```cpp
    // Initial stock value
    array<double, STOCKS> portfolio{150.30, 218.34, 34.10, 110.99, 87.34};

    // Part 1: Dispaly portfolio
    ShowStock(portfolio);
 ```

### Run Code Part 1

From the dropdown select main and run.

### Sample Output Part 1

```bash
Stock value:
[ 150.3 218.34 34.1 110.99 87.34 ]
```

Note: When validating your code, make sure your values are separated by one space, surrounded by brackets `[ ]`,  and you
include a new line character after the `]`.

## Part 2: Update Stock Values

Your next task consists in updating the values of your stocks. For this, create a function that takes two input parameters, the first one is the array of stocks, and the second parameter is the percentage increase.

```cpp
// stock.h

void IncreaseValueStock(std::array<double, STOCKS> &portfolio, double percentage);
```

Function breakdown:

- `void`: return value from the function, in this case void means nothing to return.
- `IncreaseValueStock`: is the function name
- `(std::array<double, STOCKS> &portfolio, double percentage)`
  - First parameter: an array variable taken by reference, which means the original values can be modified inside the function.
  - Second parameter: a double variable taken by value. For example, if you want to increment the value of the stock by `15%`, then you need to use `0.15`.

Now, write your function definition in stock.cpp. This time use the tradicional `for loop`. Also, use the method `size()` to determine the array size.

```c++
// in stock.cpp
/**
 * @brief Increment the value of the stock by percentage
 *
 * @param portfolio: array with stock value
 * @param percentage : percentage of increase
 */
void IncreaseValueStock(std::array<double, STOCKS> &portfolio, double percentage)
{
    // Traditional for loop
    for (auto index = 0; index < portfolio.size(); ++index)
    {
        // Update each value by percentage
    }
}
```

Now, in your `main()` call the new function  and then display the stocks again.

```cpp
    // ...
    // Part 2: Update values by percentage
    IncreaseValueStock(portfolio, 0.10);
    ShowStock(portfolio);
}
```

### Run Code Part 2

From the dropdown select main and run.

### Sample Output Part 1 and Part 2

```bash
Stock value:
[ 150.3 218.34 34.1 110.99 87.34 ]
Stock value:
[ 165.33 240.174 37.51 122.089 96.074 ]
```

---


## Part 3: Sell Stock

Your final task consists of "selling" your stock. For this, create another function that will take the same `array` as input parameter and then it sets all the values to zero.

```cpp
// stock.h

void SellStock(std::array<double, STOCKS> &portfolio)
```

Function breakdown:

- `void`: return value from the function, in this case void means nothing to return.
- `SellStock`: is the function name
- `(std::array<double, STOCKS> &portfolio)`
  - First parameter: an array variable taken by reference, which means the original values can be modify inside the function.

Now, write your function definition in stock.cpp. This time use the traditional `for loop`. Also, use the method `size()` to determine the array size.

```c++
// stock.cpp

/**
 * @brief Set all the values in the array to zero
 *
 * @param portfolio: array with stock values
 */
void SellStock(std::array<double, STOCKS> &portfolio)
{
    // Your code here
}
```

Now, in your `main()` call the new function  and then display the stocks again.

```cpp
    // ...
    // Part 3: Set all values to zero
    SellStock(portfolio);
    ShowStock(portfolio);

}
```

### Run Code Part 3

From the dropdown select main and run.

### Sample Output Part 1, 2, and 3

```bash
Stock value:
[ 150.3 218.34 34.1 110.99 87.34 ]
Stock value:
[ 165.33 240.174 37.51 122.089 96.074 ]
Stock value:
[ 0 0 0 0 0 ]
```
---

## Validate your code

Once you are satisfied with your work, run the unit test file:

From the dropdown select main_test and run.

Sample output:

Tests passed: 3 of 3 tests

---

## Submit your code

Zip your src folder and submit in Canvas.

---