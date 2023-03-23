//4.	Write a c++ program that takes a double input from the user and then converts it to an integer using a type cast, 
//rounding down to the nearest integer if necessary.

Ans:

#include<iostream>
using namespace std;
int main()
{
	float a;
	cout<<"enter a double numver\n";
	cin>>a;
	int res=(int)a;
	cout<<"the number after rounding off to nearset integer is "<<res;
	
}
