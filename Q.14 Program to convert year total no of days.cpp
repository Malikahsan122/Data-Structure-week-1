#include<iostream>
using namespace std;
int main()
{
	int days,months,weeks,years;
	cout<<"Enter total numbers of days"<<endl;
	cin>>days;
	years=days/365;
	days=days%365;
	months=days/30;
	days=days%30;
	weeks=days/7;
	days=days%7;
	
	cout<<"years"<<years <<endl;
	cout<<"months"<<months <<endl;
	cout<<"weeks"<<weeks <<endl;
	cout<<"days"<<days <<endl;
	return 0;
	
}
