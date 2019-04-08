#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string line;

    //create an output stream to write to the file
    //append a new line to the end of the file

    ofstream myFileI("input.txt", ios::app);

    if (myFileI.is_open()) {
        myFileI << "\nI am adding a line.\n";
        myFileI << "I am adding another line.\n";

        myFileI.close();
    } else {
        cout << "Unable to openfile for writing!";
    }


    //create and input stream from the output stream above and
    //read from it.
    ifstream myFileO("input.txt");
    //during the creation of ifstream, the file is opened
    //so we do not have to explicitly open the file

    if (myFileO.is_open()) {
        while (getline(myFileO, line)) {
            cout << line << "\n";
        }

        myFileO.close();
    } else {
        cout << "Unable to open file for reading!";
    }

    return 0;
}