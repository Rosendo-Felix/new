#include "stock.h"

#include <array>
#include <string>

#include "cout_redirect.h"  // To test cout <<

// this tells catch to provide a main()
// only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/**
 * @brief Sample to test a function returning an int value
 *
 */
TEST_CASE("Test ShowStock", "[Part1]")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
    std::array<double, STOCKS> portfolio{150.30, 218.34, 34.10, 110.99, 87.34};
    // Act
    ShowStock(portfolio);

    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string =
        "Stock value:\n"
        "[ 150.3 218.34 34.1 110.99 87.34 ]\n";

    // Assert
    CHECK(s_out == test_string);  // compare two integers
}

/**
 * @brief Sample to test a function returning an int value
 *
 */
TEST_CASE("Test UpdateStock by 10%", "[Part2]")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
    std::array<double, STOCKS> portfolio{150.30, 218.34, 34.10, 110.99, 87.34};
    // Act
    IncreaseValueStock(portfolio, 0.10);
    ShowStock(portfolio);

    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string =
        "Stock value:\n"
        "[ 165.33 240.174 37.51 122.089 96.074 ]\n";

    // Assert
    CHECK(s_out == test_string);  // compare two integers
}

/**
 * @brief Sample to test a function returning an int value
 *
 */
TEST_CASE("Test Sell Stock", "[Part3]")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
    std::array<double, STOCKS> portfolio{150.30, 218.34, 34.10, 110.99, 87.34};
    // Act
    SellStock(portfolio);
    ShowStock(portfolio);

    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string =
        "Stock value:\n"
        "[ 0 0 0 0 0 ]\n";

    // Assert
    CHECK(s_out == test_string);  // compare two integers
}

