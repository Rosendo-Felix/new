#include <iostream>
using namespace std;
//Global Variables
const int global_var = 10;


int main()
{
    //Local Variables
    int main_local = 15;
    int global_var = 45;
    cout << "Mains local == " << main_local << endl;
    cout << "Global Variable == " << global_var << endl;

    return 0;
}
