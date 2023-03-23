#include <iostream>

using namespace std;
int main()
{
	int arr[]={11,13,14,15,17};
	int mul=1;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<=size;i++)
	{
		mul=mul*arr[i];
	}
	cout<<mul;
}

