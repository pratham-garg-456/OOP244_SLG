### Students Participated: Elena, Bankathony

``` C++

#include <iostream>

#include <string>
 
using namespace std;
 
class Animal {

    protected:

      std::string name;  

      double weight; 

      bool haveHair; 

  public:

  Animal(){

      name = ""; 

      weight = 0.0; 

      haveHair = false; 

  }

  Animal(string aname, double aweight, bool ahaveHair){

      name = aname; 

      weight = aweight;  

      haveHair = ahaveHair; 

  }; 

  void display(){

     cout << "The name is: " << name << endl ; 

     cout << "The weight is: " << weight << endl;

     if(haveHair){

         cout << "They have hair !!!" << endl; 

     }else{

         cout << "They do not have hair !!!" << endl; 

     }; 

  };
 
};
 
class Dog : public Animal{

    string sound;

    public:

        Dog(string aname, double aweight, bool ahair, string asound):Animal(aname,aweight,ahair){

            this->sound = sound;


        }

        void display(){

            Animal::display();

            cout <<"sound is :"<< sound<<endl;

        }


};
 
// derived class has access to public and protected members
 
void display(Animal& a){ /// Animal a = dog

    a.display(); // (*a).display()

}
 
int main() {

    Dog fluffy( "fluffy", 5,true, "woh woh");

    fluffy.display();

    return 0;

}

```
