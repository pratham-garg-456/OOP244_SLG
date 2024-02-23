### What is wrong with the code below, explain what each line will do(Without running it. If you tried enough in your brain then only try it)?
 ``` C++

#include <iostream>

using namespace std;
class Guess{
    
    public:
        Guess()
        {
         cout << "Default Constructor is called"<< endl;
        }

        Guess(const char * guess_str)
        {
         cout << "Overloaded constructor is called"<< endl;
         Guess(); // call default constructor
         
         cout<< "I am at the end of the Overloaded constructor"<< endl;
        }

        ~Guess()
        {
         cout << "Destructor is Called"<< endl;
        }
};

int main() {
    Guess g1("HIII");
    return 0;
}

```

### Answer:

look here for detailed explaination:
https://hownot2code.wordpress.com/2016/06/09/how-to-properly-call-one-constructor-from-another/

