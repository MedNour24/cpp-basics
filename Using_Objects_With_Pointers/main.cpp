// Learning C++
// Exercise 03_04
// Using Objects with pointers, by Mohamed Nour Mrad

#include <iostream>
#include <string>
#include "cow.h"
using namespace std;


int main()
{
    cow *my_cow;

    my_cow = new cow("Gertie", 3, cow_purpose::hide);

    cout << my_cow->get_name() << " is a type " << (int) my_cow->get_purpose() << " cow. " << endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old. " << endl;

    delete my_cow;

    cout << endl << endl;
    return 0;
}
