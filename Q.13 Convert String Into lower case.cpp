#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a mix string"<<endl;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	cout<<"String in lower case:"<<endl;
	cout<<str;
	return 0;
}
