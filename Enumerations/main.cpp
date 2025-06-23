// Learning C++
// Exercise 02_07
// Type Casting Examples, by Mohamed Nour Mrad

#include <iostream>
#include <cstdint>


using namespace std;

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main()
{
    int meat = 8;
    cow_purpose a;

    a = cow_purpose :: meat;
    cout << "a = " << (int) a << endl;



    cout << endl << endl;
    return 0;
}
