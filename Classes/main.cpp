// Learning C++
// Exercise 03_02
// Classes, by Mohamed Nour Mrad

#include <iostream>
#include <string>
#include "cow.h"
using namespace std;


int main()
{
    cow my_cow("Hildy", 7, cow_purpose::pet);

    cout << my_cow.get_name() << " is a type " << (int) my_cow.get_purpose() << " cow. " << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old. " << endl;

    cout << endl << endl;
    return 0;
}
