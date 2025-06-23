// Learning C++
// Exercise 02_02
// Type inference with auto, by Mohamed Nour Mrad

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rocks!";

    cout << " the type of a is " << typeid(a).name() << endl;
    cout << " the type of b is " << typeid(b).name() << endl;
    cout << " the type of c is " << typeid(c).name() << endl;
    cout << " the type of d is " << typeid(d).name() << endl;
    cout << " the type of e is " << typeid(e).name() << endl;
    cout << " the type of f is " << typeid(f).name() << endl;
    cout << " the type of g is " << typeid(g).name() << endl;


    cout <<endl << endl;
    return 0;
}
