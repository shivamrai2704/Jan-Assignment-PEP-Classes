#include <iostream>

using namespace std;

int lcm(int a, int b) {
    static int multiple = max(a, b);
    if ((multiple % a == 0) && (multiple % b == 0)) \
	{
        return multiple;
    }
    else {
        multiple += max(a, b);
        return lcm(a, b);
    }
}

int main() {
    int num1, num2, LCM;
	cin>>num1>>num2;
    LCM = lcm(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << LCM;

    return 0;
}

