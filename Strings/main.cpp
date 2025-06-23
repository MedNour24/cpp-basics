// Learning C++
// Exercise 02_05
// Strings, by Mohamed Nour Mrad

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[]        = "what's up? ";

    string std_str1        = "Hey everybody! ";
    string std_str2        = "How's the going? ";

    strncat(array_str1, array_str2, LENGTH1);
    cout << array_str1 << endl;
    cout << std_str1 + std_str2 << endl;

    cout << endl << endl;
    return 0;
}
