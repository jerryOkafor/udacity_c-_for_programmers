#include <iostream>
#include <string>
#include <sstream>

int main() {
    float length = 0,width = 0;

    std::string lengthString,widthString;
    std::cout <<"Enter the lengthString of the room : \n";
    std::getline(std::cin,lengthString);

    //get the widthString of the room
    std::cout << "Enter the widthString of the room: \n";
    std::getline(std::cin,widthString);

    std::stringstream(lengthString) >> length;
    std::stringstream(widthString) >> width;

    float  area = length * width;

    std::cout << "The area of the room is : "<<area<<"\n";


    return 0;


//    //Udacity Solution
//    std::string stringLength, stringWidth;
//    float length = 0;
//    float width = 0;
//    float area = 0;
//
//    std::cout << "Enter the length of the room: ";
//    //get the length as a string
//    std::getline (std::cin,stringLength);
//    //convert to a float
//    std::stringstream(stringLength) >> length;
//    //get the width as a string
//    std::cout << "Enter width: ";
//    std::getline (std::cin,stringWidth);
//    //convert to a float
//    std::stringstream(stringWidth) >> width;
//    area = length * width;
//    std::cout << "\nThe area of the room is: " << area << std::endl;
//    return 0;
}