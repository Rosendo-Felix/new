#include <iostream>

//Declaration/Prototype
void DoNothingForNow();     //Library header files (.h)

//Main function
int main()
{
    DoNothingForNow();
    return 0;
}

//Function Definition       Library source files(.cpp)
void DoNothingForNow()
{
    std::cout << "Do nothing here for now!" << std::endl;
    return;
}