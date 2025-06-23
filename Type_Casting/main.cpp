// Learning C++
// Exercise 02_06
// Type Casting, by Mohamed Nour Mrad

#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt     = -7.66;
    sgn     = flt;
    unsgn   = sgn;

    cout << "float "    << flt << endl;
    cout << "int32_t "  << sgn << endl;
    cout << "uint32_t " << (int32_t)unsgn << endl;


    cout << endl << endl;
    return 0;
}
