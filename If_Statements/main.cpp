// Learning C++
// Exercise 04_01
// If Statements, by Mohamed Nour Mrad

#include <iostream>

using namespace std;

int main()
{
    int a = 1023;
    bool flag = false;
    char lttr = 'd';

    if ( a > 1000 )
        cout << " warning: a is over 1000." << endl;

    if ( a % 2 )
            cout << " a is odd " << endl ;
    else
            cout << " a is even " << endl;

    cout << "The letter " << lttr << " is ";
    if (lttr != 'a' && lttr != 'e' && lttr != 'i' && lttr != 'o' && lttr != 'u' &&
        lttr != 'A' && lttr != 'E' && lttr != 'I' && lttr != 'O' && lttr != 'U')
        cout << "not ";

    cout << "a vowel " << endl;

    if (flag)
        cout << "the flag is true!" << endl;
    else
        cout << "the flag is false!" << endl;


    cout << endl << endl;
    return 0;
}
