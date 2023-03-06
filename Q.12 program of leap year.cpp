#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter a year"<<endl;
	cin>>year;
	
	if (year%400==0)
	{
		cout<<"leap year"<<year<<endl;
	}
	else if (year%100==0)
	{
		cout<<" not leap year"<<year<<endl;
	}
	else if (year%4==0)
	{
		cout<<"leap year"<<year<<endl;
		
	}
	else{
		cout<<"not leap yerar"<<year;
		
	}
	return 0;
	
}
