//PROGRAM 4
//A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'.
// Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value of 'j'. 
// Make an object of the subclass and use it to assign a value to 'i' and to 'j'. Now call the function 'printNum' 
// by this object.


#include <iostream>
#include <string>
using namespace std;

class IntegerI{
private:
int i;
public:
IntegerI(int i){
this->i=i;
}


void printNum(){
cout<<"i = "<<i<<"\n";
}
};


class IntegerJ:public IntegerI{
private:
int j;
public:
IntegerJ(int i,int j):IntegerI(i){
this->j=j;
}


void printNum(){
IntegerI::printNum();
cout<<"j = "<<j<<"\n";
}
};


int main() {
IntegerJ integerJ(5,6);
integerJ.printNum();
system("pause");
return 0;
}
