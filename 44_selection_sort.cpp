#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int T;
    cout<<"Enter no. of test cases: ";
    cin >> T;
    while (T--)
    {
        cout<<"How many elements you want to input: ";
        int n;
        cin >> n;
        cout<<"Enter elements: "<<endl;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        selectionSort(arr, n);

        cout << "Sorted array: \n";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
