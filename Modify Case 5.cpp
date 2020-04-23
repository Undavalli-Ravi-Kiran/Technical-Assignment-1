#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

// Forward declaration of class B. So that, it can be specified in Friend declaration
class B;
class A 
{
    private:
      	 
		  int NumA;  // declaring int NumA as Private variable
    public:
    	
      	A()        //constructor for class A
		{ 
			cout<<" Class A constructor called"<<endl; 
      		setA();
    		getA();
	  	}
	  	
	  	
	  	void setA()        //setter function
		{
	  		cout<<"\tEnter A value: ";
    		cin>>NumA;
		} 
		
		int getA()        //getter function
		{
			return NumA;
		}
		
	  	virtual ~A()      // destructor class for class A with virtual keyword
		{
	  		cout<<"\n Class A destructor called"<<endl;
		}
		
      
      friend int add(A, B);     // friend function declaration
};

class B 
{
    private:
       int NumB;
    public:
    	
       	B()       //constructor for class B
	   	{ 
	   		cout<<" Class B constructor called"<<endl;
    		setB();
    		getB();
	   	}
	   	void setB(){
	  		cout<<"\tEnter B value: ";
    		cin>>NumB;
		  }
		int getB(){
			return NumB;
		}
		
	    ~B()             // destructor class for class B without any virtual keyword
	   	{
			cout<<"\n Class B destructor called"<<endl;
		}
       	
       	friend int add(A,B);        // friend function declaration
};

// Function add() is the friend function of classes A and B that accesses the member variables NumA and NumB
int add(A objA, B objB)
{
   	return (objA.NumA + objB.NumB);
}
	int main(int argc,char *argv[])
{
	
    if(argc==2) 
	{
		if(strcmp(argv[1],"-h")==0)     
        	{
			cout<<"\n Usage of file --> \n"
					"\t filename.exe & enter"<<endl<<
					" Program used to demonstrate different access specifiers "<<endl;
		}	
	}
	else
	{
    	A objA;    //creating objects for class A and class B
    	B objB;
    cout<<"\n Sum: "<< add(objA, objB) <<endl;
    return 0;
	}
}