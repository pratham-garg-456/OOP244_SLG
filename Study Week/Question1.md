### What is wrong with the code below, explain what each line will do(Without running it. If you tried enough in your brain then only try it)?
 ``` C++
Guess::Guess()
{
  cout << "Default COnstructor is called"<< endl;
}

Guess::Guess(const char * guess_str)
{
  cout << "Overloaded constructor is called"<< endl;
  Guess(); // call default constructor
  ....
}

~Guess::Guess()
{
  cout << "Destructor is Called"<< endl;
}

```

