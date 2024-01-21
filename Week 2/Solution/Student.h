// Student.h

#ifndef SENECA_STUDENT_H   // have to use these safeguards always
#define SENECA_STUDENT_H

namespace seneca {

    struct Student
    {
        int no;
        int no_grades_filled;
        float grade[4];
    };

    void set(Student* st);
    void display(const Student* st);

}
#endif // SENECA_STUDENT_H
