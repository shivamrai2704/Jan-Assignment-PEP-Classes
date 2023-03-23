//counting total punctuations in a string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	cin.getline(s,100);
	int count=0,i;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='!'||s[i]=='.'||s[i]==','||s[i]==':'||s[i]==';'||s[i]=='?'||s[i]=='-'||s[i]=='_')
		count++;
	}
	cout<<"total punctuations: "<<count;
}
