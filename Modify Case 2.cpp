#include <iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
    
    if (argc == 2)
    {
        cout << "sum" << endl;
    }
    else
    {
        int i,n,sum=0;        //declaring  variables
        cout << "Enter number" << endl;
        cin >> n;

        for (i = 1; i <= n; i++)  //checks the  condition
        {
            sum = (i * i) + sum; //returns the output based on the logic

        }
        if(n>0)
        {
        cout <<"Output:" <<sum<<endl;
        }
        else
        cout<<"Consider Positive integers Only "<<endl;
        }
        
    }