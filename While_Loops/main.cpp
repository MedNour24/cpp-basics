// Learning C++
// Exercise 04_03
// While Loops, by Mohamed Nour Mrad

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {12, 25, 31, 47, 58};

    auto ptr = numbers.begin();

    while (ptr != numbers.end()){
        cout << *ptr << " " << endl;
        ptr = next (ptr, 1);
    }

    /*******/

    int i = 0;

    do {
        cout << numbers[i] << " " << endl;
        i++;
    } while (i < numbers.size());

    cout << endl << endl;
    return 0;
}
