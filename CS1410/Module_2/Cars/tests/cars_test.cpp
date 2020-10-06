#include "cars.h"
#include "cout_redirect.h"  // To test cout <<
// this tells catch to provide a main()
// only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Show Sedan Price", "[Task1]")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
    double sedan_value = 19234.48;
    // Act
    ShowPrice(sedan_value);
    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string = "Car Value: 19234.48\n";

    // Assert
    REQUIRE(s_out == test_string);
}

TEST_CASE("Update Sedan Price", "[Task1]")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
    double sedan_value = 19234.48;
    // Act
    UpdatePrice(sedan_value, 21000.99);
    ShowPrice(sedan_value);
    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string = "Car Value: 21000.99\n";

    // Assert
    REQUIRE(s_out == test_string);
}

TEST_CASE("Getting Sedan's horse power", "[Task1]")
{
    // Arrange
    int hp = 0;
    // Act
    hp = HorsePower();
    // Assert
    REQUIRE(hp == kHorsepower);
}

TEST_CASE("Show Lamborghini Price", "[Task2]")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
    double lambo_value = 99234.48;
    // Act
    lamborghini::ShowPrice(lambo_value);
    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string = "Car Value: 99234.48\n";

    // Assert
    REQUIRE(s_out == test_string);
}

TEST_CASE("Update Lamborghini Price", "[Task2]")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
    double lambo_value = 99234.48;
    // Act
    lamborghini::UpdatePrice(lambo_value, 101000.99);
    lamborghini::ShowPrice(lambo_value);
    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string = "Car Value: 101000.99\n";

    // Assert
    REQUIRE(s_out == test_string);
}

TEST_CASE("Getting Lamborghini's horse power", "[Task2]")
{
    // Arrange
    int hp = 0;
    // Act
    hp = lamborghini::HorsePower();
    // Assert
    REQUIRE(hp == lamborghini::kHorsepower);
}