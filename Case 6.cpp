#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Student{
private:
    int *Rollno;
    char Name[20]; 
public:
    Student()   
    {
        cout<<"Constructor is Invoked"<<endl;
    }
    Student(int *no,char *name)  
    {
        cout<<"Parameterized Constructor is Invoked"<<endl;
        Rollno=no;
        strcpy(Name,name);
    }


    void Assign_Value(int *no,char name[])
    {
        Rollno=no;
        strcpy(Name,name);
    }

    void display()
    {
        cout<<"RollNo:"<<*Rollno<<endl<<"Name:"<<Name<<endl;
        cout<<endl;
    }

    void operator ++()  
    {
        ++(*Rollno);
    }
    ~Student()
    {
        cout<<"Destructor is Invoked"<<endl;
    }
};

int main(int argc,char* argv[])
{
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     
        {
            cout<<"used to display private variable int* and char[20], enter one int and char variables"<<endl;
        }
    }
    else
    {
        Student ob;
        int Val;
        char Nm[20];
        cout<<"Enter RollNo of Student:";
        cin>>Val;
        cout<<"Enter Name of Student:";
        getchar();
        cin.get(Nm,100,'\n');
        cout<<endl<<"Using Parameterized Constructor"<<endl;
        Student ob1(&Val,Nm);    
        ob1.display();
        cout<<"After Operator Overloading"<<endl;
        ++ob1;     
        cout<<"Using Member Function"<<endl;
        ob.Assign_Value(&Val,Nm);    
        ob.display();
    }
    return 0;
}
