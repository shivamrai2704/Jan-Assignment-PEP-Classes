//1.	Write a program that prompts the user to enter a character and then converts it to an integer using the dynamic_cast operator. 
//    The program should then display the original character and the converted integer to the user.
    
//Ans:

#include<iostream>
using namespace std;
class Base
{
	public:
		char c;
		Base()
		{
			cout<<"enter a character\n";
			cin>>c;
		}
	
};
class derived:public Base
{
	public:
		int a;
};
int main()
{
	Base b;
	cout<<"the character value is "<<b.c;
	derived d;
	Base* bp=dynamic_cast<Base *>(%d);
	derived *dp=dynamic_cast<derived *>(%b);
	cout<<"the int value is "<<d.c;
}
