

### Consider a C++ class named ResourceHolder that manages a dynamically allocated array of integers. The class definition is provided below:

Question Tasks:

- Implement the ResourceHolder class with a dynamically allocated array of integers and necessary member functions to ensure proper resource management.

- Implement the Copy Constructor (ResourceHolder(const ResourceHolder& other)) for deep copying the content of the resource.

- Implement the Copy Assignment Operator (ResourceHolder& operator=(const ResourceHolder& other)) for deep assignment of the resource data.

- Implement the Destructor (~ResourceHolder()) to release the dynamically allocated memory.

- Implement a display function that prints the content of the resource.

``` c++
#include <iostream>

class ResourceHolder {
private:
    int* data;
    int size;

public:
    // Implement the necessary constructors, destructor, and member functions

    // Constructor to initialize the resource with an array of integers and its size
    ResourceHolder(const int* array, int arraySize);

    // Copy Constructor for deep copying
    ResourceHolder(const ResourceHolder& other);

    // Copy Assignment Operator for deep assignment
    ResourceHolder& operator=(const ResourceHolder& other);

    // Destructor to release the dynamically allocated memory
    ~ResourceHolder();

    // Function to display the content of the resource
    void display() const;
};

// Implement the necessary member functions outside the class definition
// Ensure proper deep copying and deep assignment logic is implemented.
// You may also implement additional helper functions if needed.


```
