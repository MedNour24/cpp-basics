// Learning C++
// Exercise 02_04
// Arrays, by Mohamed Nour Mrad


#include <iostream>

//#define AGE_LENGTH 4

using namespace std;


int main()
{
    const size_t AGE_LENGTH = 4;
    int age [AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9};

    age [0] = 25;
    age [1] = 20;
    age [2] = 19;
    age [3] = 19;

    cout << "the Age array has "   << AGE_LENGTH << " elements" << endl;
    cout << "Age[0] = " << age [0] << endl;
    cout << "Age[1] = " << age [1] << endl;
    cout << "Age[2] = " << age [2] << endl;
    cout << "Age[3] = " << age [3] << endl;

    cout << endl << endl;
    return 0;
}
