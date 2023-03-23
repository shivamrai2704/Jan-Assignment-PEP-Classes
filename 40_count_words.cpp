#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    int q;
    cout << "Enter how many words you want to input: ";
    cin >> q;
    vector<string> vec;
    while (q > 0)
    {
        cin >> word;
        vec.push_back(word);
        q--;
    }
    sort(vec.begin(), vec.end());
    
    int count = 1;
    for (int i = 1; i < vec.size(); ++i)
    {
        if (vec[i] == vec[i - 1])
        {
            ++count;
        }
        else
        {
            cout << vec[i - 1] << ": " << count << endl;
            count = 1;
        }
    }
    if (!vec.empty())
    {
        cout << vec.back() << ": " << count << endl;
    }
    return 0;
}
