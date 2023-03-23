// Program to replace lower-case characters with upper-case and vice-versa
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	cout<<"Input your string: ";
	cin>>s;
	int n;
	n=strlen(s);
	cout<<"Reverse string is: ";
	for(int i=0; i<n;i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
			cout<<s[i];
		}
		else if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
			cout<<s[i];
		}
	}
}

