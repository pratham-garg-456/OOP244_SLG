


``` C++

// We have a class name as Student:

class Student { 
    int no; 
    float grade[NG]; 
    int ng; 
public:
   Student::Student() {
    no = 0;
    ng = 0;
   }

   Student::Student(int sn, const float* g, int ng_) {
    set(sn, g, ng_);
   }

   void Student::set(int sn, const float* g, int ng_) {
       bool valid = sn > 0 && g != nullptr && ng_ >= 0;
       if (valid)
           for (int i = 0; i < ng_ && valid; i++)
               valid = g[i] >= 0.0f && g[i] <= 100.0f;

    if (valid) {
        // accept the client's data
        no = sn;
        ng = ng_ < NG ? ng_ : NG;
        for (int i = 0; i < ng; i++)
            grade[i] = g[i];
    } else {
        no = 0;
        ng = 0;
    }
}
};

// And I created a student name harry:
float gh[] = {89.4f, 67.8f, 45.5f};
Student harry(1234, gh, 3);
```
### Suppose you want to reward harry with a bonus of 3 points to his grades. Discuss two possible approaches to achieve this using the Student class:

#### Using a Function:
Describe how you could create a member function within the Student class, let's say addBonus(int bonus), to add a fixed bonus to each grade.
#### Overloading += Operator:
Explain how overloading the += operator in the Student class can provide a more concise and expressive way to add the bonus to all grades. Provide a small code snippet illustrating how this can be achieved.

### Discussion:
#### 1.	Consider the advantages and disadvantages of each approach.
#### 2.	Discuss any potential issues or considerations when adding a fixed bonus to grades.
#### 3.	Explore whether one approach is more readable or intuitive than the other.


