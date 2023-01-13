//PROGRAM 2
//Create a class named 'Programming'. While creating an object of the class, if nothing is passed to it, then the message "I love programming languages" should be printed. If some String is passed to it, then in place of "programming languages" the name of that String variable should be printed.
//For example, while creating the object if we pass "cpp", then "I love cpp" should be printed.

#include<iostream>
using namespace std;
class Programming
{
	public:
		Programming(char arr[])
		{
			cout<<"I love "<<arr<<endl;
		}
		Programming()
		{
			cout<<"I love programming"<<endl;
		}
};
int main()
{
	char str[10];
	cout<<"enter string to be printed\n";
	cin>>str;
	Programming P1;
	Programming P2(str);
}
Footer
© 2023 GitHub, Inc.
