#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main() {
    ifstream file("C:/Users/carahn/Desktop/CS 201/test");
    if (!file.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    int lineCount = 0;
    char character;

    while (file.get(character)) {
        if (character == '\n') {
            ++lineCount;
        }
    }

    cout << lineCount << endl;
    return 0;
    //test to see changes!!
}
