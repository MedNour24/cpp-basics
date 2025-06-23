// Learning C++
// Exercise 03
// Structures, by Mohamed Nour Mrad

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

using namespace std;


struct cow{
    string name;
    int age;
    cow_purpose purpose;
};

int main()
{
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;

    cout << my_cow.name << " is a type " << (int) my_cow.purpose << " cow. " << endl;
    cout << my_cow.name << " is " << my_cow.age << " years old. " << endl;

    cout << endl << endl;
    return 0;
}
