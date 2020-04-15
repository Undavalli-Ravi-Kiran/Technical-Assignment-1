#include<iostream>
using namespace std;

  class base     // base class
{
  
int Sum;			// Private members

public:			// Public members
  
int sum (int x, int y) 
  {
    
Sum = x + y;
    
cout << "Sum: " << Sum << endl;

} 
protected:			//Protected members
  
int Sub;

};

class derived:private base	// derived class
{

public:
 
int sub (int a, int b) 
  {
    
Sub = a - b;
    
cout << "Sub: " << Sub << endl;

} 
};

int
main (int argc, char *argv[]) 
{
  
if (argc == 2)		// condition for arguments to dispaly -h file
    {
      
cout << "\\usage of  program:\\" << endl << " Acess Specifiers " <<
	endl;
      
cout << " " << endl;
    
}
  
  else
    
    {
	base ob;      // creating object for classes
derived ob1;
      
ob.sum (1.1, 6);
      
ob1.sub (11, 5);
}
}


 
