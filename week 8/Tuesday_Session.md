## This is the code we discussed in the Tuesday session:
### Students attended: Elena, Tony, Naveen

``` C++

#include <iostream>

using namespace std;

class Student{
   int id; 
   double gpa;
   //char* name;  // address of dynamic memory 
   //char* program;
public: 
   Student(){
   	id = 0;
    	gpa = 0.0;
   }
   void display()const{
      cout << "id: "<< id <<endl;
      cout << "gpa: "<< gpa <<endl;
   }

   double getGpa(){
        return gpa;
   }
   void setGpa(double grade){
       gpa = grade;
   }

   Student& operator += (double grade){ // member function
       gpa += grade;    
   }
};

Student& operator += (Student& a, double grade ){ //helper function
    a.setGpa(a.getGpa() + grade); 
    return a;
}


ostream& operator << (ostream& os, Student& a){  // helper operator
    os << "id: "<< a.getId() <<endl;
    os << "gpa: "<< a.getgpa() <<endl;    
    return os;
}

int main() {

    Student Naveen;
    Naveen.display();
    
    Naveen += 2.0;
    
    Naveen.display();
    
   // ostream -> cout, cerr, clog
    
    //cout << Naveen; // << operator is defined for primitive type not for compound types
 

    return 0;
}

```
