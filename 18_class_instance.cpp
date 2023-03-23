//1.	Write a program that creates a class called "Student" with the following data members:
//name (string)
//age (int)
//grade (double)
//In the main function, create an instance of the Student class and initialize its data members. Then, open a file for writing and write the contents of the Student object to the file.
//
//Ans:

#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int age;
    double grade;
};

int main() {
    Student student;
    student.name = "John Doe";
    student.age = 20;
    student.grade = 3.5;

    ofstream outFile;
    outFile.open("students.txt");

    outFile << student.name << " " << student.age << " " << student.grade << endl;

    outFile.close();

    cout << "Student information saved to file." << endl;

    return 0;
}
