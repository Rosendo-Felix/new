/**
 * @file ret_values.cpp
 * @author
 * @brief
 * @date
 *
 */

#include <iostream>
#include "dodgers.h"
#include "yankees.h"
//using namespace std;

int main()
{
    std::cout << "Dodgers World Series Championships = " << dodgers::Titles() << std::endl;
    std::cout << "Yankees World Series Championships = " << yankees::Titles() << std::endl;

    return 0;
}