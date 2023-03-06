#include<iostream>
using namespace std;


//find reverse of numbers
int main()
{
	int n,rev=0;
	cout<<"Enter any numbers for reverse :"<<endl;
	cin>>n;
	while(n!=0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	cout<<"THe reverse of num is"<<rev<<endl;
	if(n==rev)
	{
		cout<<"The number is plindrome"<<endl;
	}
		else{
			cout<<"The num is not plindrome";		
	}
return 0;
}
