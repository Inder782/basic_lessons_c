#include <iostream>

int main(){
    std::string name;
    std::cout<<"enter your name: ";
    std::getline(std::cin,name);
    

    name.append("gmail.com");
    std::cout<<"your username is "<<name;
    }

    

