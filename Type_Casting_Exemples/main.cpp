// Learning C++
// Exercise 02_07
// Type Casting Examples, by Mohamed Nour Mrad

#include <iostream>
#include <cstdint>


using namespace std;

int main()
{
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "celsius   : " << celsius << endl;

    float weight = 10.99;

    cout << endl << endl;
    cout << "Float              : " << weight << endl;
    cout << "Integer part       : " << (int) weight << endl;
    cout << "Fractional part    : " << weight - (int) weight << endl;



    cout << endl << endl;
    return 0;
}
