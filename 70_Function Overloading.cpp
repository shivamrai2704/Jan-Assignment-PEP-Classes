#include<iostream>
using namespace std;
void fun(int a)
{
	cout<<"Age is: "<<a<<endl;
}
void fun(double b)
{
	cout<<"Height is: "<<b;
}
int main()
{
	int age;
	double height;
	cout<<"Enter age of Naliah: ";
	cin>>age;
	cout<<"Enter height of Naliah: ";
	cin>>height;
	fun(age);
	fun(height);
}
