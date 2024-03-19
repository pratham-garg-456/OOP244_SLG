## Imagine you're building a virtual zoo management system. Your system should handle different types of animals with unique behaviors and characteristics. Implement a hierarchy of animal classes using inheritance and dynamic memory allocation, ensuring that certain traits are protected while allowing flexibility for specific behaviors.

### Your hierarchy should include the following classes:

#### Animal: Base class for all animals. It should have protected data members name (string) and age (integer). Implement a constructor to initialize these members. It should have a display function to display the details. 

#### Mammal: Derived from Animal, representing mammals. It should have a private data member numLegs (integer). Implement a constructor to initialize numLegs and invoke the Animal constructor. It should have a display function to display the details.

#### Bird: Derived from Animal, representing birds. It should have a private data member canFly (boolean). Implement a constructor to initialize canFly and invoke the Animal constructor. It should have a display function to display the details.

#### Zoo: A class representing a zoo that contains a dynamic array of pointers to Animal. Implement a method addAnimal() to add a new animal to the zoo, and a method displayAnimals() to display information about all animals in the zoo.

### Write a C++ program that demonstrates the usage of these classes. You should dynamically allocate memory for animals, add them to the zoo, and display their information.

All your code should be compiled using this command on matrix:
g++ -Wall -std=c++11 -g -o ws main.cpp

After compiling and testing your code, run your program as follows to check for possible memory leaks (assuming your executable name is ws):
valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ws

``` C++
int main() {

    Zoo zoo(5);

    Mammal elephant("Dumbo", 10, 4);
    Bird parrot("Polly", 3, true);
    Mammal lion("Simba", 5, 4);

    zoo.addAnimal(&elephant);
    zoo.addAnimal(&parrot);
    zoo.addAnimal(&lion);

    zoo.displayAnimals();

    return 0;
}

```
