//palindrome
#include<iostream>
#include<string.h>
#include  <bits/stdc++.h>
using namespace std;
int main()
{	
	string ch;
	cout<<"enter string\n";
	getline(cin,ch);
	string st = ch;
	reverse(st.begin(),st.end());
	if(st==ch)
	    cout<<"palindrome"<<endl;
	else
	    cout<<"No it is not palindrome";	
}
