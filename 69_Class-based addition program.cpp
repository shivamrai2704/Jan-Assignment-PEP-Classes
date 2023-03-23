#include <iostream>    
using namespace std;    
 class Sum    
{    
private: int a, b, c; 
public:    

void add()    
{
cout<<"Enter first numbers: ";    
cin>>a; 
cout<<"Enter second numbers: "; 
cin>>b;
c= a+b;    
cout<<"Sum of two number is: "<<c<<endl;    
}    
};    
int main()    
{    
Sum sm;    
sm.add();    
return 0;    
}    
