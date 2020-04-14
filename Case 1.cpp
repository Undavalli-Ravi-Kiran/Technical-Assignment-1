#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<typeinfo>
using namespace std;
bool value(string str)                //function to check length of string is '1' or not

{
int i;
for(i=0;str.length()==1;i++)
{
return true;
}
}	
int main(int argc,char *argv[])
{
int j;                            //declaring integer variables
int k;
float f;                           //declaring float variable
if (argc==2)
	{
		cout << " parse.exe" << endl;
		cout << " Enter values in command line" << endl << "char: a-z/ A-Z " << endl << "numbers(0-9)" << endl << "string group of characters" << endl;
		cout << " float (real/ decimal numbers)" << endl;

	}
	else
	{
	
for(j=1;j<argc;j++)
{
k=atoi(argv[j]);
f=atof(argv[j]);
if(k==0)
{
	if(value(argv[j]))
	{
	cout<<"Type  Value   Size of" <<endl;
	
	}
	    if(value(argv[j]))
	{
	cout<<"char";
	cout<<"\t"<<argv[j]<< "\t"<<strlen(argv[j])<<endl;
	}
	else
	{
	cout<<"string";
	cout<<"\t"<<argv[j]<< "\t"<<sizeof(argv[j])<<endl;
	}
}
else
{
if(k==f)
cout<<"int"<< "\t"<<k<<"\t"<<sizeof(k)<<endl;
else
cout<<"float"<< "\t"<<f<<"\t"<<sizeof(f)<<endl;
}
}
return 0;
}
}
