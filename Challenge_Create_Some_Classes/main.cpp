// Learning C++
// Challenge 2
// by Mohamed Nour Mrad

#include <iostream>
#include <string>
#include "records.h"

using namespace std;



int main()
{
    Student my_student(1, "Hilda jones ");
    Course my_course(7, "Physics 101 ", 4);
    Grade my_grade(1, 7, 'B');

    cout << "Student : " << my_student.get_name() << endl;
    cout << "Course : " << my_course.get_name() << endl;
    cout << "Credits : " << my_course.get_credits() << endl;
    cout << "Grade : " << my_grade.get_grade() << endl;


    cout << endl << endl;
    return 0;
}
