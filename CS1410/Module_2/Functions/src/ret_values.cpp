/**
 * @file ret_values.cpp
 * @author
 * @brief
 * @date
 *
 */

#include <iostream>
using namespace std;

//Prototype
int max(int a, int b);
const int& maxR(int a, int b);
//Dfault args
int Multiply(int multiplied, int multiplier = 1);

int main()
{

    cout << "Max is: " << max(99,11) << endl;
    int result = max(55,88);
    cout << "max is: " << result << endl;
    
//    int n1 = 1, n2 = 2. n3 = 3, n4 = 4;
//    int& a = maxR(n1, n2);
//    int& b = maxR(n3, n4);

    result = Multiply(23);
    cout << "Call with one param: " << result << endl;
    result = Multiply(23, 2);
    cout << "Call with two param: " << result << endl;

    return 0;
}

//define     returning by value
int max(int a, int b)
{

    if (a > b)
    {
        return a;
    }else
    {
        return b;
    }

}

//const int& maxR(int a, int b)
//{
    //returning by reference
//    if (a > b)
//    {
//        return a;
//    }else
//    {
//        return b;
//    }
//}

int Multiply(int multiplied, int multiplier)
{
    return multiplied * multiplier;
}