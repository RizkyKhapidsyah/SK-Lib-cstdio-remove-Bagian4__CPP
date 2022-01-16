#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char filename[] = "C:\\Users\\file.txt";

    // deletes the file if it exists
    int result = remove(filename);


    // check if file has been deleted successfully
    if (result != 0) {
        // print error message
        cerr << "File deletion failed";
    } else {
        cout << "File deleted successfully";
    }

    _getch();
    return 0;
}