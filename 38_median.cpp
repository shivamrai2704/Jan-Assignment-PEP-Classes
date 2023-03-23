#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cout << "Enter how many no. you want to input: ";
    cin >> q;
    int x;
    vector<int> vec;
    while (q > 0)
    {
        cin >> x;
        vec.push_back(x);
        q--;
    }
    int n = vec.size();
    if (n == 0)
    {
        cout << "No integers entered." << endl;
        return 0;
    }

    sort(vec.begin(), vec.end());
    int median;
    if (n % 2 == 0)
    {
        median = (vec[n / 2 - 1] + vec[n / 2]) / 2;
    }
    else
    {
        median = vec[n / 2];
    }
    cout << "Median: " << median << endl;
    return 0;
}
