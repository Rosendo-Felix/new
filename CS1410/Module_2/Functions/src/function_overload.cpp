#include <iostream>
using namespace std;

// Local Prototypes
//function overloading(Same name different paramiters)
bool IsSafeHeightForRollerCoaster(int height_in_cm);
bool IsSafeHeightForRollerCoaster(float height_in_m);


// Constants

int main()
{
    //int height = 180;
    float height = 1.80;
    if (IsSafeHeightForRollerCoaster(height))
    {
        cout << "is safe to ride" << endl;

    }else {
        cout << "not safe to ride" << endl;

    }


    return 0;
}

// Local function definitions
bool IsSafeHeightForRollerCoaster(int height_in_cm)
{
    return height_in_cm > 100 && height_in_cm < 210;
}

bool IsSafeHeightForRollerCoaster(float height_in_m)
{
    return height_in_m > 1.0f && height_in_m < 2.10f;
}