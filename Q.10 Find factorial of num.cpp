#include<iostream>
using namespace std;

int main()
{
	int num,factorial=1;
	cout<<"enter a num"<<endl;
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	cout<<"the factorial of num is"<<factorial;
	return 0;
	
}
