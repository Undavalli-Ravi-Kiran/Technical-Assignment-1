#include<iostream>
#include<string.h>

using namespace std;

class Employee{
private:
    int *iId_no;
    char cNAME[20];
public:
    Employee()
    {
        cout<<"Constructor is Invoked"<<endl;
        
        iId_no =new int;   /*allocating memory*/
        *iId_no=0;
        *cNAME='\0';
    }
    Employee(int i_no,char cname[20])
    {
        cout<<"Parameterized Constructor is Invoked"<<endl;
        iId_no=new int;
        *iId_no=i_no;
        strcpy(cNAME,cname);
    }
    
    Employee(const Employee& ob)    /* copy constructor  */
    {
        
        iId_no=new int;    /*delete iId_no;*/
        strcpy(cNAME,ob.cNAME);
        
        *iId_no=*ob.iId_no;   /*copying variables*/
    }


    void Assign_Value(int ino,char cname[])
    {
        iId_no=new int;
        *this->iId_no=ino;
        strcpy(cNAME,cname);
    }


    void display()
    {
        cout<<"Id_No:"<<*iId_no<<endl<<"Name:"<<cNAME<<endl;
        cout<<endl;
    }
    
    void operator=(const Employee& ob);    /* Assignment operator overloading */
    
    ~Employee()    /* destructor */
    {
        cout<<"Deallocating Memory"<<endl;
    }
};
void Employee::operator=(const Employee& ob)
{
    if (&ob != this)
    {
        strcpy(cNAME,ob.cNAME);
        
        delete iId_no;         /* deleting previous memory */
        iId_no=new int;
        iId_no=ob.iId_no;
    }
}
int main(int argc,char* argv[])
{
    if(argc==2)
    {
       
        if(strcmp(argv[1],"-h")==0)
        {
            cout<<"Enter given Inputs"<<endl;
        }
    }
    else
    {
        int iRo_no;
        char cNAME_Employee[50];
        Employee* E1=new Employee();
        E1->display();
        Employee* E2=new Employee(5,"RAVI");
        E2->display();

        /*copy constructor is invoked*/

        Employee *E3=new Employee(*E2);
        cout<<"After using copy constructor"<<endl;
        E3->display();
        cout<<"Enter Id_No:";
        cin>>iRo_no;
        cout<<"Enter Name less than 50 characters:";
        cin>>cNAME_Employee;
        E2->Assign_Value(iRo_no,cNAME_Employee);
        cout<<"After performing copy and assigning different values"<<endl;
        E3->display();
        E2->display();
        cout<<"Assignment Operator is Invoked"<<endl;
        E2=E3;
        E3->~Employee();
        E2->display();
        E3=E1;
        cout<<"After performing assignment operation"<<endl;
        E3->display();
        E2->display();
    }
    return 0;
}