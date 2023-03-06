#include<iostream>
using namespace std;

//armstrong program
int main()
{
	int n,rem,o,num=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	o=n;
	while(o!=0)
	{
		rem=o%10;
		num=num+rem*rem*rem;
		o=o/10;
	}
	if(n==num)
	{
		cout<<"armstrong num"<<endl;
	}
	else{
		cout<<"not armstrong num"<<endl;
	}
	return 0;
}


