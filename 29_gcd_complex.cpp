#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, hcf = 1;
    cout << "Enter the two numbers whose GCD is to be found: ";
    cin >> a >> b;

    vector<int> factors_a, factors_b;

    // Find prime factors of a
    for (int i = 2; i <= a; i++) {
        while (a % i == 0) {
            factors_a.push_back(i);
            a /= i;
        }
    }

    // Find prime factors of b
    for (int i = 2; i <= b; i++) {
        while (b % i == 0) {
            factors_b.push_back(i);
            b /= i;
        }
    }

    // Sort the factors in ascending order
    sort(factors_a.begin(), factors_a.end());
    sort(factors_b.begin(), factors_b.end());

    // Find the GCD
    int i = 0, j = 0;
    while (i < factors_a.size() && j < factors_b.size()) {
        if (factors_a[i] == factors_b[j]) {
            hcf *= factors_a[i];
            i++;
            j++;
        }
        else if (factors_a[i] < factors_b[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << "The GCD of " << a << " and " << b << " is " << hcf << endl;

    return 0;
}

