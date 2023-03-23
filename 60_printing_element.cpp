#include <iostream>

using namespace std;
int main()
{
	int n;
	cout<<"Size of the array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Printing the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" element: "<<arr[i]<<endl;
	}
}

