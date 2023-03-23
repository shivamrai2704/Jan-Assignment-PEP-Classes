/*3     Create a class called "Book" with the following data members:
title (string)
author (string)
ISBN (string)
price (double)
stock (int)
In the main function, create an instance of the Book class and initialize its data members. Then, use the fstream
library to open a file for writing and write the contents of the Book object to the file in binary format.

Ans:*/
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
    Book book;
    book.title = "The Great Gatsby";
    book.author = "F. Scott Fitzgerald";
    book.ISBN = "9780743273565";
    book.price = 15.99;
    book.stock = 25;

    ofstream outFile;
    outFile.open("book.bin", ios::binary);

    outFile.write((char*)&book, sizeof(book));

    outFile.close();

    cout << "Book information saved to file." << endl;

    return 0;
}
