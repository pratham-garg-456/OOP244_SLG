#include <iostream>

using namespace std;


// Data members should be protected
class Animal{
//protected:
	char* name; 
	int age;
 public:
    Animal(); // default constructer
	// create a constructor that accept arguments (char * a, int b)
	// Animal(const char * a, int b); // put const always when passing string
	//Animal(const char * a);
	virtual void  display();  // dynamic binding
 } 
 
 Animal::Animal(const char * a, int b){
	 
 }
 
  Animal::Animal(){	  
	name[0] =’\0’; // name = nullptr;
	age = 0;
 }
 
 void Animal::display(){
	std::cout <<"The name is: " << name << endl;
	std::cout<< "The age is:" << age << endl;
 }
 
 
class Mammal: public Animal{
	int numLegs;
 public:
    Mammal(); // default constructor
	// Mammal(const char* _name, int _age, int _numLegs);
	
	void  display();
}
Mammal::Mammal(){
 	numLegs=0;
}
Mammal::Mammal(const char* _name, int _age, int _numLegs){
	Animal(_name, _age);
	numLegs = _numLegs;
}
 void Mammal::display{
	Animal::display();
    std::cout<< “Number of legs is: “<< numLegs<<endl;
 }

class Bird: public Mammal{  // derived from Animal not mammal
	Bool canFly;
public:
 	Bird();
	// Bird(const char* _name, int _age, int _canFly);
	void display();
}

 Bird::Bird(){
	canFly=true;
}
 void Bird::display(){
	Mammal::display();
	if (canFly){
		std::cout<<”Can fly”<<endl;
	}
	else{
		std::cout<<”Cannot fly”<<endl;
	}
 }

Class Zoo {
	Animal** ptr;
 public:
   Zoo();
	void addAnimal(Animal anim);
	void displayAnimals();
}


 Zoo::Zoo(){
	ptr=nullptr;
 }

 Zoo::addAnimals(Animal anim){
	if(anim != ‘\0’)
	{
		Animal = new char[strlen(anim.name)];
	}
 }
 
 class Student {
	 int id;
	 int age;
public:
	Student();
	Student(int a, int b);
 }


int main() {
	
	char m;
	char* n; // pointer pointing to dynamic array of characters
	
	
	int *ptr;  // create a pointer pointing to a integer
	Animal* ptr; // create a pointer pointing to a Animal
	
	ptr = new Animal[20];
	
	// pointer pointing to dynamic array of animal
	// pointer pointing to dynamic array of animal pointer

	Animal** 
	Student Elena (1028, 20);
	
	Animal dog;
	
	
	Animal Pg("Elephant" , 15); // strings are always const or immutable
	
	
	
	
	

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
