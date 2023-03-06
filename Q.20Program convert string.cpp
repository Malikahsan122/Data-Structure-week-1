#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char a[50];
	cout<<"Enter a string"<<endl;
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	cout<<"String in lowercase:"<<a<<endl;
	return 0;
	
}
