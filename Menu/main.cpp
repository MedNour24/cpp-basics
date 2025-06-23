#include <iostream>

using namespace std;

int main()
{
    int choix,A,B;
    do
    {
    cout << "Enter A" << endl;
    cin  >> A;
    }while (A < 0);

    do
    {
    cout << "Enter B" << endl;
    cin  >> B;
    }while(B < 0);

    do
    {
        do
        {
    cout << "------ *MenuCalculatrice* ------" << endl;
    cout << "----------- 1: A+B -------------" << endl;
    cout << "----------- 2: A-B -------------" << endl;
    cout << "----------- 3: A*b -------------" << endl;
    cout << "----------- 4: A/b -------------" << endl;
    cout << "----------- 0: Exit ------------" << endl;
    cin  >> choix;
    }
    while (choix <0 || choix >4);

    switch (choix)
        {
    case 1:
        cout << A+B <<endl;
        break;

    case 2:
        cout << A-B <<endl;
        break;

    case 3:
        cout << A*B <<endl;
        break;

    case 4:
        cout << A/B <<endl;
        break;
    //...
    //...
    default:
        cout << "erreur" << endl;
        break;
        }
    }
    while (choix =! 0);
    return 0;
}
