#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Hello world, I am ready for C++" << std::endl;

    cout << "Echo Hello world using std:: namespace" << endl;

    cout << "int size = " << sizeof(int) << endl;

    cout << "Ints" << setw(15) << "Floats" << setw(15) << "Doubles";

    return 0;
}