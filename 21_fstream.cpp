//4     Write a program that reads the contents of a file containing Book objects and prints them to the console. 
//The program should use the fstream library to open the file, read the Book objects one at a time, and print their title, author, 
//ISBN, price and stock to the console.
//
//Ans:

#include <iostream>
#include <fstream>
using namespace std;

class Book {
    public:
    string title;
    string author;
    string ISBN;
    double price;
    int stock;
};

int main() {
    ifstream inFile;
    inFile.open("book.bin", ios::binary);

    if (!inFile) {
        cout << "Error opening file" << endl;
        return 1;
    }

    Book book;
    while (inFile.read((char*)&book, sizeof(book))) {
        cout << "Title: " << book.title << endl;
        cout << "Author: " << book.author << endl;
        cout << "ISBN: " << book.ISBN << endl;
        cout << "Price: " << book.price << endl;
        cout << "Stock: " << book.stock << endl;
        cout << endl;
    }

    inFile.close();

    return 0;
}
