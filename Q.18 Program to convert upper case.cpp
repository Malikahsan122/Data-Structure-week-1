#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter the string in lowercase :"<<endl;
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
		cout<<("%c",a[i]-32);
	}
	return 0;
}

