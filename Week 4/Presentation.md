
### 1. Find the error in the code below (There are 2 errors in the code: 

 <img width="170" alt="Array_error" src="https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/e71b01c3-d976-4058-8d84-d019aaec6fec">

### Ans. 
![image](https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/b44b267f-5a94-4e69-baf3-7a5badc0e86b)


### 2. Write a C++ program that declares and initializes an array of pointers to integers. Populate the array with the addresses of integer variables, and then print the values stored at those addresses. 
### Ans.  
![image](https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/88dfe55e-6908-476f-9d36-73a57b4da5b6)

 

### 3. Now modify the code in the question 1 to use dynamic memory allocation. 
### Ans.  
![image](https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/437fcff0-77f3-4362-a9e2-5bb13a5501aa)


### Q1. Complete the TODO:
 ![image](https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/f204d2c7-eae4-412e-87ca-69c8b06fa310)


### Ans.  
![image](https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/d2b1c495-d18e-4750-b9b2-9f3b84229468)

### Q2: Member Functions and Privacy
#### Consider a class Rectangle with private data members length and width. Implement the following member functions:
#### •	void setDimensions(int l, int w): Set the length and width of the rectangle.
#### •	int calculateArea() const: Calculate and return the area of the rectangle.
#### •	void display() const: Display the dimensions and area of the rectangle.
#### Ensure that the length and width data members are private.
 ![image](https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/01479533-284a-4f32-9f9a-a5b91a74e3bf)


### Ans:
 ![image](https://github.com/pratham-garg-456/OOP244_SLG/assets/81003075/7d060e8e-2403-4dce-969f-ec4384d94d6a)

### Question 3: Object's Empty State
#### Extend the Rectangle class from Question 1 to incorporate the concept of an empty state. If the dimensions set using setDimensions are wrong, Set the object to be in an empty state. Display an appropriate message in the display function for an empty state.

### Ans.
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions(int l, int w);
    void setEmpty();  // New function to set the object in an empty state
    int calculateArea() const;
    void display() const;
};

void Rectangle::setDimensions(int l, int w) {
    if (l > 0 && w > 0) {
        length = l;
        width = w;
    } else {
        setEmpty();  // Call setEmpty function for incorrect values
    }
}

void Rectangle::setEmpty() {
    // Set the object to an empty state
    length = 0;
    width = 0;
}

int Rectangle::calculateArea() const {
    return length * width;
}

void Rectangle::display() const {
    if (length > 0 && width > 0) {
        cout << "Rectangle Dimensions:\n";
        cout << "Length: " << length << "\n";
        cout << "Width: " << width << "\n";
        cout << "Area: " << calculateArea() << "\n";
    } else {
        cout << "Empty Rectangle\n";
    }
    cout << endl;
}

int main() {
    Rectangle myRectangle;
    // Setting invalid dimensions to trigger the setEmpty function
    myRectangle.setDimensions(-1, 8);
    myRectangle.display();

    return 0;
}



 

 

