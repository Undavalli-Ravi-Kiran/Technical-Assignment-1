#include<iostream>
#include<string.h>
using namespace std;
class studentclass1
{
    private:

    /*Access - Specifier*/
   /*Member Variable Declaration*/
   char name[20];
   int RegNo, Sub1, Sub2, Sub3;
   float Total, Avg;
   public:

   /*Access - Specifier*/
   /*Member Functions read() and print() Declaration*/

   void read() {
      /*Get Input Values For Object Variables*/
      cout << "Enter the Name of Student:";
      cin >> name;

      cout << "Enter the Registration Number:";
      cin >> RegNo;

      cout << "Enter Marks for Subject 1,2 and 3 :";
      cin >> Sub1 >> Sub2>> Sub3;
   }

   void sum() {
      Total = Sub1 + Sub2 + Sub3;
      Avg = Total / 3;
   }

   void print() {
      /*Show the Output*/
      cout << "Name :" << name << endl;
      cout << "Registration Number :" << RegNo << endl;
      cout << "Marks :" << Sub1 << " , " << Sub2 << " , " << Sub3 << endl;
      cout << "Total :" << Total << endl;
      cout << "Average :" << Avg << endl;
   }
   protected:
        int attd;
};

class std2:public studentclass1
{
    public:
        void set_attd(int attd)
        {
            this->attd=attd;
        }
        void print_attd()
        {
            cout<<"Attendence is:"<<attd;      
        }
        
};
int main()
{
    studentclass1 ob;
    cout << "Read and Print Student Information ";

    cout << "\nStudentClass : Student 1" << endl;
    ob.read();
    ob.sum();
    ob.print();
    std2 s3;
    s3.set_attd(75) ;
    s3.print_attd();
}