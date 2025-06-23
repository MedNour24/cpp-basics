// Learning C++
// Exercise 04_02
// Switch Statements, by Mohamed Nour Mrad

#include <iostream>

using namespace std;

int main()
{
    float operand_1, operand_2, result;
    char operation;

    cout << "Enter operand 1: " << endl << flush;
    cin  >> operand_1;

    cout << "Enter operand 2: " << endl << flush;
    cin  >> operand_2;

    cout << "Chose operation [ + - * / ]: " << endl << flush;
    cin  >> operation;

    // switch goes here
    switch (operation) {

case '+' :
    result = operand_1 + operand_2; break;
case '-' :
    result = operand_1 - operand_2; break;
case '*' :
    result = operand_1 * operand_2; break;
case '/' :
    result = operand_1 / operand_2; break;
default :
    cout << "Ereur" << endl; break;
    }

    cout << "the result is " << result << endl;


    cout << endl << endl;
    return 0;
}
