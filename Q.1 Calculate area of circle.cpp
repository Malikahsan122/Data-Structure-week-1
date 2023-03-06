#include<iostream>
#include<cmath>
using namespace std;
// Program to calculate area of circle
int main()
{
	float radius,area;
	cout<<"Enter radius of circle"<<endl;
	cin>>radius;
	
	area=M_PI*radius*radius;
	cout<<"Area of circle is : "<<area;
	return 0;	
}
