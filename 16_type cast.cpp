//3.	Write a program that prompts the user to enter a floating point number and then converts it to an integer by using a type cast.

Ans:

#include<iostream>
using namespace std;
int main()
{
	float a;
	cout<<"enter a floating numver\n";
	cin>>a;
	int res=(int)a;
	cout<<"the number after converting it in integer is "<<res;
	
}
