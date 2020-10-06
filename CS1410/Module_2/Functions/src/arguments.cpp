/**
 * @file arguments.cpp
 * @author
 * @brief   learn about passing arguments by passing value and reference
 * @date
 *
 */

#include <iostream>
using namespace std;
//Prototypes
void TwoInts(int num1, int num2);
void TwoIntsIncrease(int& num1, int& num2);

int main()
{
    int n1 = 10, n2 = 20;
    cout << "now pass by value" << endl;
    cout << n1 << " " << n2 << endl;
    TwoInts(n1,n2);
    TwoInts(n1 + 2, n2 + 2); // call with argumenrts

    cout << n1 << " " << n2 << endl;
    cout << "Now pass by reference" << endl;
    TwoIntsIncrease(n1,n2);
    cout << n1 << " " << n2 << endl;


    return 0;
}


//Increment the value of two numbers and display their sum
void TwoInts(int num1, int num2)
{
    num1 += 1;
    num2 += 2;
    int num3 = num1 + num2;
    cout << "num1 + num2 == " << num3 << endl;
}

void TwoIntsIncrease(int& num1, int& num2)
{
    num1 += 1;
    num2 += 2;
    int num3 = num1 + num2;

    cout << "num1 + num2 = " << num3 << endl;

}