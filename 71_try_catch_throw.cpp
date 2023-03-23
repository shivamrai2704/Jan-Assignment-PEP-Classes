#include<iostream>
using namespace std;
int main() {
    float a, c;
    float d;
    cout << "Enter the value of num:";
    cin>>c;
    cout << "Enter the value of deno:";
    cin>>a;

    try {
        if ((a) != 0) 
		{
            d = c / (a);
            cout << "Result is:" << d;
        } else {
            throw (a);
        }
    } catch (float a) {
        cout << "Exception Cought: Answer is infinite because deno is:" << a;
    }
}
