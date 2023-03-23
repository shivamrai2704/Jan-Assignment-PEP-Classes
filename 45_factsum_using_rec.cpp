//find sum of factorials of a numbers digit
//eg 154 sum=1!+5!+4!=145
#include<iostream>
using namespace std;
int factorial(int n)
{
	int facto=1;
	if(n==0)
	return 1;
	else
	{
		facto=factorial(n-1)*n;
	}
	return facto;
}
int main()
{
	int n,nn,fact,sum=0;
	cout<<"enter number\n";
	cin>>n;
	while(n!=0)
	{
		nn=n%10;
		int temp=factorial(nn);
		sum+=temp;
		n=n/10;
	}
	cout<<"the sum of factorial of digits of the given number is\n"<<sum;
}