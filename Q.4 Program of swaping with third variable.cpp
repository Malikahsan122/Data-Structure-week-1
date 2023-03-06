#include<iostream>
using namespace std;
//program to swap two number with third num
int main()
{
	int x,y,temp;
	cout<<"Enter values"<<endl;
	cin>>x>>y;
	cout<<"before swaping x="<<x<<" y="<<y<<endl;
	
temp=x;
x=y;
y=temp;
	
	cout<<"after swaping x="<<x<<" y="<<y<<endl;
	
	return 0;
	
	
}
