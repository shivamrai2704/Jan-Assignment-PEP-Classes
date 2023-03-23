//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int arr1[n];
//	int arr2[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr1[i];
//		arr2[i]=arr1[i];
//	}
//	cout<<"First array: ";
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr1[i]<<" ";
//	}
//	cout<<"Second array: ";
//		for(int i=0;i<n;i++)
//	{
//		cout<<arr2[i]<<" ";
//	}
//}

#include <iostream>
using namespace std;

void display( int arr[], int n )
{
   for ( int i = 0; i < n; i++ ) 
   {
      cout << arr[i] << ", ";
   }
}

void solve( int arr[], int newArr[], int n )
{
   int i;
   for ( i = 0; i < n; i++ ) 
   {
      newArr[ i ] = arr [ i ];
   }
}

int main(){
   int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = sizeof( arr ) / sizeof( arr[0] );
   cout << "Given array: ";
   display(arr, n);
   int newArray[n] = {0};
   solve( arr, newArray, n );
   cout << "\nArray After copying: ";
   display(newArray, n);
}
