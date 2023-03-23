//counting total characters in a string
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
		count++;
	}
	cout<<"Total characters: "<<count;
}
