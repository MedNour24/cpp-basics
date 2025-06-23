#include <iostream>

using namespace std;

int main()
{
class Animal {
public:

    string name;
    int age;

void speak() {
        cout << "ROAAARRR!" << endl;
    }
};
Animal lion;
    lion.name = "leo";
    lion.age =5;

    cout << "Hi" << ", i'am " << lion.name << " and i'am " << lion.age << "\n" << endl;

    lion.speak();
    return 0;
}
