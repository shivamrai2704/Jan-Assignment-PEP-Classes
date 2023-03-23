//Write a c++ program to find second largest element in a given array of integers
//int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,56,7,4,21,45,62,32,52};
    int size_ = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size_; i++)
    {
        for(int j = 0; j<size_-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout<<arr[1];

}
