// Learning C++
// Exercise 06_01
// Opening a text file for reading, by Mohamed Nour Mrad

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main()
{
    ifstream inFile;
    string str;
    int number;
    char letter;
    inFile.open("people.txt");
    if (inFile.fail())
        cout << endl << "File not found!" << endl;
    else {
        while (!inFile.eof()){
            getline(inFile, str);
            cout << str << ", ";
            getline(inFile, str);
            number = stoi(str);
            cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            cout << letter << endl;
    }
    inFile.close();
         }

    cout << endl << endl;
    return 0;
}
