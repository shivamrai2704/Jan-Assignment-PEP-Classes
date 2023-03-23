//replace space with special character
#include<iostream>
#include<string.h>
#include  <bits/stdc++.h>
using namespace std;

int main()
{
	string ch;
	cout<<"enter string\n";
	getline(cin,ch);
	for(int i=0;i<ch.length();i++)
	{
		if(ch[i]==' ')
		{
			ch[i]='#';
		}
	}
	cout<<ch;
}
