#include<iostream>
using namespace std;
//program to swap two number without third num
int main()
{
	int x,y;
	cout<<"Enter values"<<endl;
	cin>>x>>y;
	cout<<"before swaping x="<<x<<" y="<<y<<endl;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout<<"after swaping x="<<x<<" y="<<y<<endl;
	
	return 0;
	
	
}
