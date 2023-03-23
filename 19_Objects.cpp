//2.	Write a program that reads the contents of a file containing Student objects and prints them to the console.
//The program should open the file, read the Student objects one at a time, and print their name, age, and grade to the console.

Ans:
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	string s;
	file.open("abc",ios::in);
	while(file>>s)
	{
		cout<<s<<" ";
	}
	file.close();
}
