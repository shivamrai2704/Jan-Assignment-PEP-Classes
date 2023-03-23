//2.	Write a program that prompts the user to enter a pointer to an object of a certain class and then converts it to a pointer to an object 
//of a different class using the const_cast operator. The program should then display the original pointer and the converted pointer to the user.

//Ans:

#include <iostream>  
using namespace std;  
 
class ConstantUsage { 
	int i; 
	public: 
		void changeVal()
		{ 
		int k;
		cin>>k;
		( const_cast <ConstantUsage*> (this) )->i= k; 
        cout<<k<<endl; 
        } 
}; 
 
int fun(int* ptr)  
{  
	return (*ptr + 10);  
}  
 
int main(void)  
{ 
	ConstantUsage obj; 
	obj.changeVal(); 
	const int val = 10;  
	const int *ptr = &val;  
	int *ptr1 = const_cast <int *>(ptr); 
	cout << fun(ptr1);  
	return 0;  
}
