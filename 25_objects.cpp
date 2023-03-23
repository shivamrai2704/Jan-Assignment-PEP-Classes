//PROGRAM 3
//Create a class to print the area of a square and a rectangle. The class has two functions with 
//the same name but different number of parameters. The function for printing the area of rectangle 
//has two parameters which are its length and breadth respectively while the other function for printing 
//the area of square has one parameter which is the side of the square.


#include <iostream>
using namespace std;
class Area
{
public:
    void area(int l, int b)
    {
        cout<<"Area of Rectangle is = "<<l*b<<endl;
    }

    void area(int a)
    {
        cout<<"Area of Square is = "<<a*a<< endl;
    }
};

int main()
{
    Area obj;
    obj.area(2,3);
    obj.area(3);
}
