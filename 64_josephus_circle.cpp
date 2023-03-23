#include<iostream>
using namespace std;
int circle(int n, int k) 
{ 
if (n == 1) 
	return 1; 
else
	return (circle(n - 1, k) + k-1) % n + 1; 
} 
 
int main() 
{ 
	int n, k;
  	cin >> n >> k;
    cout<< circle(n, k); 
    return 0; 
}

