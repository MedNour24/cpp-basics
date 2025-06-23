// Learning C++
// Exercise 02_03
// Preprocessor directives, by Mohamed Nour Mrad

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG

using namespace std;

int main()
{

    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    cout << "[About to perform the addition]" << endl;
#endif // DEBUG
    large += small; // large = large + small;

    cout << " the large integer is " << large << endl;



    cout << endl << endl;
    return 0;
}
