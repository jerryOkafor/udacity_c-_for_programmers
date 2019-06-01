#include <iostream>
#include <string>

int main() {
    for(int i = 0; i<2; i++){
        std::string name, address, phoneNumber;
        std::cout << "Enter your name?\n";
        std::getline(std::cin, name);
        std::cout << "Enter your address?\n";
        std::getline(std::cin,address);
        std::cout << "Enter your phoneNumber?\n";
        std::getline(std::cin,phoneNumber);

        std::cout <<name<<"\n";
        std::cout <<"\t\t"+address<<"\n";
        std::cout <<"\t\t"+address<<"\n";
    }
    return 0;

//    //Udacity Solution
//    std::string name1, address1, phoneNo1;
//    std::string name2, address2, phoneNo2;
//
//    //get user1 information
//    std::cout<<"User1 what is your name?\n";
//    std::getline(std::cin, name1);
//    std::cout<<"User1 what is your address?\n";
//    std::getline(std::cin, address1);
//    std::cout<<"User1 what is your phone number?\n";
//    std::getline(std::cin, phoneNo1);
//
//    //get user2 information
//    std::cout<<"User2 what is your name?\n";
//    std::getline(std::cin, name2);
//    std::cout<<"User2 what is your address?\n";
//    std::getline(std::cin, address2);
//    std::cout<<"User2 what is your phone number?\n";
//    std::getline(std::cin, phoneNo2);
//
//    //print information
//    std::cout<<"\n\n"<<name1<<"\n";
//    std::cout<<"\t\t"<<address1<<"\n";
//    std::cout<<"\t\t"<<phoneNo1<<"\n";
//
//    std::cout<<"\n\n"<<name2<<"\n";
//    std::cout<<"\t\t"<<address2<<"\n";
//    std::cout<<"\t\t"<<phoneNo2<<"\n";
//    return 0;
}