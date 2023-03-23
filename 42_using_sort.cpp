#include <bits/stdc++.h>

using namespace std;

int main()
{
    int word;
    int q;
    cout << "Enter how many no. you want to input: ";
    cin >> q;
    vector<int> vec;
    while (q > 0)
    {
        cin >> word;
        vec.push_back(word);
        q--;
    }
    sort(vec.begin(), vec.end());
    cout<<"After sorting"<<endl;
    for (int i = 0; i < vec.size(); ++i)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
