//finding number of words in a string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	int count;
	cout<<"enter string\n";
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	cout<<"the number of words in the string is "<<count+1;
}
