
 

Coding Question: 
 
Objective: Implement a class called DynamicRectangle to represent rectangles. The DynamicRectangle class should support the following functionalities: 

Constructors to initialize the rectangle with a given length and width. 

Implement a copy constructor to create a deep copy of a DynamicRectangle object. 

Implement a copy assignment operator to assign the contents of one DynamicRectangle object to another. 

Implement a destructor to deallocate memory properly. 

Overload the + operator to add two rectangles and return a new rectangle with the combined area. 

Overload the == operator to check if two rectangles have the same area. 

Implement a helper function doubleArea() that returns twice the area of the rectangle. 

Overload the input (>>) and output (<<) stream operators to allow reading from and writing to streams. 

// main.cpp 

 

#include <iostream> 

#include "Rectangle.h" 

 

int main() { 

    Rectangle rect1(5, 10); 

    Rectangle rect2(3, 8); 

 

    std::cout << "Rectangle 1 Area: " << rect1.doubleArea() << std::endl; 

    std::cout << "Rectangle 2 Area: " << rect2.doubleArea() << std::endl; 

 

    Rectangle combinedRect = rect1 + rect2; 

    std::cout << "Combined Rectangle Area: " << combinedRect.doubleArea() << std::endl; 

 

    if (rect1 == rect2) 

        std::cout << "Rectangles 1 and 2 have the same area." << std::endl; 

    else 

        std::cout << "Rectangles 1 and 2 have different areas." << std::endl; 

 

    Rectangle userRect; 

    std::cout << "Enter dimensions for a new rectangle:" << std::endl; 

    std::cin >> userRect; 

    std::cout << "User Rectangle: " << userRect << std::endl; 

 

    return 0; 

} 

 

// DynamicRectangle.h 

 

#include <iostream> 

 

class DynamicRectangle { 

private: 

    double* length; 

    double* width; 

 

public: 

    DynamicRectangle();  // Default constructor 

    DynamicRectangle(double l, double w);  // Parameterized constructor 

    DynamicRectangle(const DynamicRectangle& other);  // Copy constructor 

    DynamicRectangle& operator=(const DynamicRectangle& other);  // Copy assignment operator 

    ~DynamicRectangle();  // Destructor 

    double doubleArea() const;  // Helper function 

 

    // Overloaded operators 

    DynamicRectangle operator+(const DynamicRectangle& other) const; 

    bool operator==(const DynamicRectangle& other) const; 

 

    // Input and Output stream operators 

    friend std::istream& operator>>(std::istream& input, DynamicRectangle& rect); 

    friend std::ostream& operator<<(std::ostream& output, const DynamicRectangle& rect); 

}; 

 

