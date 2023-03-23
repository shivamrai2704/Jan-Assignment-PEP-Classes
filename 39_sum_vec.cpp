#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int q;
    cout << "Enter how many no. you want to input: ";
    cin >> q;
    int x;
    int sum = 0;
    vector<int> vec;
    while (q > 0)
    {
        cin >> x;
        vec.push_back(x);
        q--;
    }

    for (int i : vec)
        sum += i;
    cout << "Sum: " << sum << endl;
    return 0;
}
