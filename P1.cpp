//PROGRAM 1:
//Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
//1 - having no parameter - values of both length and breadth are assigned zero.
//2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
//3 - having one number as parameter - both length and breadth are assigned that number.
//Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.

#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle()
		{
			length=0;
			breadth=0;
		}
		Rectangle(int x)
		{
			length=x;
			breadth=x;
		}
		Rectangle(int x,int y)
		{
			length=x;
			breadth=y;
		}
		int getarea()
		{
			return length*breadth;
			
		}
			
};
int main()
{
	Rectangle R1;
	Rectangle R2(10);
	Rectangle R3(2,3);
	
	cout<<R1.getarea()<<endl;
	cout<<R2.getarea()<<endl;
	cout<<R3.getarea()<<endl;
	
}
