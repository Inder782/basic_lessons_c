#include <iostream>
// do while = check once if you want to run or not 
int main(){
    std::string name;
    do{
    std::cout<<"Please enter your name-->";
    std::cin>>name;
    }while(name!="inder");
    std::cout<<"Oh there you are "<<name;
}