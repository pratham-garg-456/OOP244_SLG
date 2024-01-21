// Student.cpp

#include <iostream> // System libraies always on top
#include "Student.h" // followed by yours


using namespace std;

namespace seneca{ // put your code in namespace seneca (make it a standard practice)

    void set( Student* st)
    {
        Student harry = { 306, 2, {78.9, 91.6} };
        *st = harry;
    }

    void display(const Student* st)
    {
        cout << "Grades for " << st->no << endl;

        for (int i = 0; i < st->no_grades_filled; i++)
        {
            cout << st->grade[i] << endl;
        }
    }
}