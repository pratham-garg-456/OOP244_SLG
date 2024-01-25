#### References

//References are the aliasis of already existing variable. Aliasis means another name.
 int &a = b;	// here  a is just another name for variable b. So, there is only one variable which is taking space in memory not two.

//References are always initialized while creation.
//We can’t do something like this:
int &a;
a = b;
//Think of it like this My name is Pratham but people also call me PG. So, for a single person I am using 2 different names. Is possible to say the nick name is fredy, just fredy you don’t specify whose nickname. It is crazy to say that we give nickname to something not nothing. Right
//So,
int &a = b ; //is the correct way.

//----------------------------------------------------------------------------------------------------------------------------------
//Question 1:
void letsMessWithYourBrain1(double* des, double* src){
    des = src;
}
int main() {
   double a = 10.10;
   double b = 20.20;   
   double *p = &a;
   cout << *p << endl;   
   letsMessWithYourBrain1(p, &b);
   cout << *p << endl;
   return 0;
}
//-----------------------------------------------------------------------------------------------------------------------------------
//Question 2:

void letsMessWithYourBrain2(double*& des, double* src){
    des = src;
}
int main() {
   double a = 10.10;
   double b = 20.20;
   double *p = &a;
   cout << *p << endl;
   letsMessWithYourBrain2(p, &b);
   cout << *p << endl;
   return 0;
}
//--------------------------------------------------------------------------------------------------------------------------
//Question 3:
  
void letsMessWithYourBrain3(double** des, double* src){
    *des = src;
}
int main() {
   double a = 10.10;
   double b = 20.20;
   double *p = &a;
   cout << *p << endl;
   letsMessWithYourBrain3(&p, &b);
   cout << *p << endl;
   return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------

