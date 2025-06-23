// Learning C++
// Exercise 05_02
// Function Parameters, by Mohamed Nour Mrad

#include <iostream>

using namespace std;

int square(int x){
 return x*x;
}
void swap_ab(int *a, int*b){

int temp = *b;
*b = *a;
*a = temp;
}

void swap_ba(int a, int b){
int temp=b;
b=a;
a=temp;
}

int main()
{
    int a = 9, b;
    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;

    swap_ab(&a, &b);
    cout << "a = " << a << ", b= " << b << endl;

    swap_ba(a, b);
    cout << "a = " << a << ", b= " << b << endl;


    cout << endl << endl;
    return 0;
}
