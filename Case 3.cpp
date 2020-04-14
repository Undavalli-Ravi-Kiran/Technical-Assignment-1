#include<iostream>
#include<string.h>
#include<typeinfo>
using namespace std;

 
unsigned Num = 50;

signed int Num1 = 100;

 
 
void
test_function_storage () 
{
  
auto Auto_Num = "NEW";
  
long double Count;
  
cout << "Enter the double value:";
  
cin >> Count;
  
static int Static_Num;
  
register int Register_Num;
  
cout << "Enter the Register variable:";
  
cin >> Register_Num;
  
Static_Num = Static_Num + Register_Num * 2;
  
for (int Start = 0; Start < Count; Start++)
    
    {
      
Static_Num++;
    
} 
cout << endl;
  
cout << "Global Variables:" << endl;
  
cout << "Global   = " << Num << " " << "Size:" << sizeof (Num) << endl;
  
cout << "Second Global Variable = " << Num << " " << "Size:" <<
    sizeof (Num1) << endl;
  
cout << endl;
  
cout << "Storage classes" << endl;
  
cout << "Static   = " << Static_Num << " " << "Size:" <<
    sizeof (Static_Num) << endl;
  
cout << "Register = " << Register_Num << " " << "Size:" <<
    sizeof (Register_Num) << endl;
  
cout << "Auto = " << Auto_Num << '\t' << "Type =" << typeid (Auto_Num).
    name () << endl;
  
cout << "Double Value:" << Count << " " << "Size of Double:" <<
    sizeof (Count) << endl;
  
cout << endl;

}


 
 
 
void
type_modifiers () 
{
  
unsigned Num;
  
cout << "Enter a unsigned Number:";
  
cin >> Num;
  
signed int Num1;
  
cout << "Enter signed number:";
  
cin >> Num1;
  
test_function_storage ();
  
cout << endl;
  
cout << "Local variables" << endl;
  
cout << "Global Variable in function = " << Num << " " << "Size:" <<
    sizeof (Num) << endl;
  
cout << "Second Global Variable in function = " << Num1 << " " << "Size:"
    << sizeof (Num1) << endl;
  
cout << endl;

}


 
int
main (int argc, char *argv[]) 
{
  
if (argc >= 2)
    
    {
      
if (strcmp (argv[1], "-h") == 0)
	
	{
	  
cout <<
	    " Enter different values as mentioned and observe the output" <<
	    endl;
	
}
    
}
  
  else
    
    {
      
test_function_storage ();
      
type_modifiers ();
    
}
  
return 0;

}


