// Learning C++
// Exercise 02
// Using Variables, by Mohamed Nour Mrad

#include <iostream>

using namespace std;

int a, b = 5;// Globals variables

int main()
{
    bool my_flag;// Locals variables
    a = 7;
    my_flag = false;
    cout << "a = " << a          << endl;
    cout << "b = " << b          << endl;
    cout << "flag = " <<my_flag  << endl; // if 0, its means false
    my_flag = true;
    cout << "flag = " << my_flag << endl;
    cout << "a + b = " << a + b  << endl;
    cout << "b - a = " << b - a  << endl;

    unsigned int positive;
    positive = b - a;
    cout << "b - a (unsigned) = " << positive << endl;


    cout << endl << endl;
    return 0;
}
