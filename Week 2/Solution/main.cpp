// main.cpp

#include "Student.h"

using namespace seneca;

int main()
{
    Student harry = { 975, 2, {50.0f, 50.0f} };

    set(&harry);
    display(&harry);

    return 0;
}
