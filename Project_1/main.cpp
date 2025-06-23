#include <iostream>
using namespace std;

/* This is a multi-line comment.
 * the matching asterisks to the left
 * can make this easier to read
 */

 /*
int main()
{
/*
    // define two variables named a and b (of type int)
    int a, b;

    a=5;
    b=10;

    cout << a + b <<endl;

    // std::cout lives in the iostream library
    cout << "Hello world!\n";
    cout << "Hello" << " world!";

    // this is much easier to read
    cout << "How are you?\n";

    // don't you think so?
    cout << "Yeah!\n";

    int x{ 5 }; // define integer variable x, initialized with value 5
    cout << x << "\n"; // print value of x (5) to console

    int y{ 8 };
    cout << "y is equal to: " << y << "\n";
*/
//    int M{};

/*
    cout << "Hi!" << endl;

    cout << "My name is Mohamed Nour" << endl;

    cout << "Enter a number" << endl;

    cin >> M;

    cout << "You entered\t" << M << '\n';
*/
/*
    return 0;
}
*/

void doNothing(int&)
{

}
int main()
{
    int x;
    int a               = 1;
    int cost            = 57;
    int pricePerItem    = 24;
    int value           = 5;
    int numberOfItems   = 17;

    cout << sizeof(int) << '\n'; // print how many bytes of memory an int values take

    doNothing(x);

    cout << x << '\n';

    cout << 1+2 << endl;

    for ( int i = 1 ; i <= 5 ; i++ )
    {
        cout << "HELLO " << i << " " << "\n";
    }

    while ( a <= 15 )
    {
        cout << a << ' ';

        a++;
    }

    return 0 ;
}
