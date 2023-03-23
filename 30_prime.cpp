#include<bits/stdc++.h>
using namespace std;

bool pf(int n)
{
	bool prime=true;
	if(n==2)
	{
		return pf;
	}
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			prime=false;
			return prime;
		}
	}
	return prime;
}
int main()
{
	cout<<pf(4);
}
