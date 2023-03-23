//Program to count the number of vowels in capital letters

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	char s[100];
	cin>>s;
	n=strlen(s);
	
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			count++;
		}
	}
	cout<<"The no. of vowels are: "<<count;
}

