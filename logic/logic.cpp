#include <iostream>

int main(){
    //&& check if two conditions are true
    // || check if atleast on of the conditions is true.
    // != reverses the logical statment of its operand

    int temp;
    std::cout<<"Enter the temprature :";
    std::cin>>temp;
    if(temp>0 && temp<30){
        std::cout<<"the temprature is good";
    }
    else{
        std::cout<<"the temprature is bad";
    }
}