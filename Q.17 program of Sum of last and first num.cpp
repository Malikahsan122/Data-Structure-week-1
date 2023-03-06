#include<iostream>
using namespace std;
int main()
{
	int num,first,last,sum=0;
	cout<<"enter a numbder"<<endl;
	cin>>num;
	last=num%10;
	first=num;
	while(first>=10)
	{
		first=first/10;
	}
	sum=first+last;
	cout<<"Sum of first and last digit is:"<<sum<<endl;
	return 0;
}
