// Learning C++
// Exercise 02_07
// Preprocessor directives, by Mohamed Nour Mrad

#include <iostream>
#include <cstdint>


using namespace std;

int main()
{
    int nums[5] = {1, 23, 32, 24, 337};
    float result;

    result =  (nums[0] + nums[1] +nums[2] + nums[3]
    + nums[4] );

    result /= 5;

    cout << "The Average is = " << result << endl;


    cout << endl << endl;
    return 0;
}
