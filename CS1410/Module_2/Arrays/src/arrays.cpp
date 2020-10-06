/**
 *@file arrays.cpp
 *@author Rosendo Felix (rosendo.felix@mail.weber.edu)
 *@brief Learn about arrays
 *@version 0.1
 *@date 2019-09-09
 *
 * @copyright Copyright (c) 2020
 */

#include <iostream>
#include <array>
using namespace std;

// Main Function
int main()
{
    // Arrays: type name [Elements]
//    int students[5] = {1, 5, 9, 3, 6};

    //int students[] = {1, 5, 9, 3, 6}; // Compiler determines the array SIZE.

    //To initialize an array do NOT use =, only { }
    array<int,5> students {3, 7, 9, 2, 4};

    //access numbers by: name[Index]
    //useing the * before students.begin because if it is not there it will print the physical address of element
    cout << "First member " << *students.begin() << endl;

    //for looping through array
    for(int i = 0; i < students.size(); ++i)
    {
        cout << i + 1 << " Member " << students[i] << endl;
    }

    // "For Each" loop
    for(auto value : students)
    {
        cout << "Container Member " << value << endl;
    }


    //multidimensional arrays
    // Arrays: type name [Rows][Columns]
//    int biArray[3][5] =
//            {
//                    {5, 2, 6, 1, 4},
//                    {1, 12, 9, 2, 3},
//                    {2, 8, 7, 10, 5}
//            };
//
//    for(int x = 0; x < 3; ++x)// loop over rows
//    {
//        //cout << "itterating over " << x << "row" << endl;
//       for(int y = 0; y < 5; ++y) //loop over columns
//       {
//           cout << x << " " << y << " value is " << biArray[x][y] << endl;
//       }
//    }












  return 0;
}