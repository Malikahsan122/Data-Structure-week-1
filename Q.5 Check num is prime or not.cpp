#include<iostream>
using namespace std;
//check Num is prime or not
int main()
{
	int num,check=0;
	cout<<"Enter number"<<endl;
	cin>>num;
	
	for (int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			check++;
		}
	}
	if(check==2)
	{
		cout<<"the num is prime"<<endl;
	}
	else{
		cout<<"The num is not prime"<<endl;
	}
	return 0;
}
