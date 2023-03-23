#include <bits/stdc++.h>

using namespace std;

int main() {
  int x;
  int q;
    cout << "Enter how many words you want to input: ";
    cin >> q;
  vector<int> vec;
   while (q > 0)
    {
        cin >> x;
        vec.push_back(x);
        q--;
    }

  int min = vec.empty() ? 0 : *min_element(vec.begin(), vec.end());
  int max = vec.empty() ? 0 : *max_element(vec.begin(), vec.end());

  cout << "Min: " << min << endl;
  cout << "Max: " << max << endl;
  return 0;
}
