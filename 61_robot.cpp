#include <iostream>

using namespace std;

int ways(int cr,int cc, int r, int c)
{
	if(cr>r || cc>c)
	{
		return 0;
	}
	if(cr==r && cc==c)
	{
		return 1;
	}
	return ways(cr,cc+1,r,c)+ways(cr+1,cc,r,c);
}

int main()
{
	int m,n;
	cout<<"Enter no. of rows and columns: ";
	cin>>m>>n;
	
	cout<<"No of ways destination can be reached: "<<ways(0,0,m-1,n-1);
	return 0;
}

