// devide string in n equal parts
#include<iostream>
#include<string.h>
using namespace std;
void division(char s[],int n,int x)
{
	int size = x/n;
	for(int i=0;i<x;i++)
	{
		if(i%size==0)
		{
			cout<<endl;
		}
		cout<<s[i];
	}	
}
int main()
{
	int n,n1;
	cout<<"size of array"<<endl;
	cin>>n;
	char str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	cout<<"no. of parts"<<endl;
	cin>>n1;
	if(n%n1==0)
	division(str,n1,n);
	else
	cout<<"invalid";
}
