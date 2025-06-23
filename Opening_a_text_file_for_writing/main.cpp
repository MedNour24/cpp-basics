// Learning C++
// Exercise 06_02
// Opening a text file for writing, by Mohamed Nour Mrad

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main()
{
    ofstream outFile;
    float a = 0.000f, b = 0.000f;

    cout << " Enter a : " << endl;
    cin  >> a;

    cout << " Enter b : " << endl;
    cin  >> b;


    outFile.open("calculation.txt");
    if (outFile.fail())
            cout << endl << "Couldn't open the file!" << endl;
    else{
        outFile << "a= " << a << endl;
        outFile << "b= " << b << endl;
        outFile << "a + b = " << a + b << endl;
        outFile << "a * b = " << a * b << endl;
        outFile.close();
        cout << " File written successfully!" << endl;
    }

    cout << endl << endl;
    return 0;
}
