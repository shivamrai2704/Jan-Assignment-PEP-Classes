#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("example.txt");
    string line;
    int line_count = 0;

    while (getline(file, line)) {
        line_count++;
    }

    cout << "Number of lines: " << line_count << std::endl;
    return 0;
}

