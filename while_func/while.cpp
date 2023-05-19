#include <iostream>

int main(){
    std::string name;
    std::cout<<"Enter your name:-->";
    std::cin>>name;
    while(name.empty()){
        std::cout<<"You didn't enter anything";
}   std::cout<<"Hello "<<name;
}