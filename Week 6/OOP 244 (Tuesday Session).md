## Paste Your Solutions below with your name


### Chris yun

``` c++
Void addBonus (int bonus){

for (int i=0; i<ng; i++){
grade[i]+= bonus;

if(grade[i] >100.0f){
grade[i]=100.0f
}

}

}


Student& operator+=(int bonus){
grade[i]+= bonus;
if(grade[i] >100.0f){
grade[i]=100.0f
}
}
return *this;
}

```

### Diego 

``` C++

Student operator + (int bonus){
	for(int i= 0; i < ng ; i++){
  		this->grade[i] += bonus;
	}
{ // missing returning


Student operator+=(int bonus){ // missing & sign
	for(int i= 0; i < ng; i++){
	this->grade[i] += bonus;
	}
} // missing returning

Student diego;

diego += bonus
diego.grade + bonus
``` 

### Elena
``` C++
void addBonus(int bonus)
{
if (bonus > 0)
{
 for (int i = 0; i <ng; i++)
  {
    grade+=bonus; //no index of the array written => grade[i]+=bonus; 
   }
}
} 

Student& operator +=(float grade)     //bonus is to be passed to the function, not the grade
{
  for (int i=0; i<ng; i++)
   {
     grade +=bonus;           //not sure how to access the value of the bonus; 
    }                                     //no index of the array written => grade[i]+=bonus 
};                                       //no return included => return *this; 


```

=========================================================


### Chris Yun

``` C++
operator bool() const{
return no!=0 && ng !=0;
}

void display() const{
if(*this){
cout<< "Student Number: " << no << endl;
cout<< "Grades: "<<endl;
 for (int i = 0; i < ng; i++) {
cout << "  Grade " << i + 1 << ": " << grade[i] << endl;
    }

else{
cout<<"Empty Student"<<endl;
}

}

```


### Diego

``` C++
void Student::display() const{
	if(!*this){
	cout << "Empty student" << endl;
	} else {
	cout << "Student: " << this->no;
	for( int i = 0; i < ng; i++){
	cout << i+1 << " :" <<this->grades[i]
	}
	}
}

```

### Elena

``` C++
 void display()
{
bool t=true;
if (t = (no != 0 && grade !=nullptr)){
cout << no << endl;
 for (int i=o; i < ng; i++)
  {
    cout << grade[i] << endl;
   }
}
}

```
