#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1, 100);
  for (int &x : vec)
    x = dis(gen);

  cout << "Random vector: [";
  for (int i = 0; i < n; ++i)
  {
    cout << vec[i];
    if (i != n - 1)
      cout << ", ";
  }
  cout << "]" << endl;
  return 0;
}
