#include <iostream>

int main(){
    char opt;
    double num1;
    double num2;
    double result;
    
    std::cout<<"*****************CALCULATOR*****************"<<"\n";
    std::cout<<"Enter what you want to do"<<"\n";
    std::cin>>opt;
    std::cout<<"Enter the first number: "<<"\n";
    std::cin>>num1;
    std::cout<<"Enter the second number: "<<"\n";
    std::cin>>num2;
    switch(opt){
        case '+':
        result=num1+num2;
        std::cout<<result<<"\n";
        break;
        case '-':
        result=num1-num2;
        std::cout<<result<<"\n";
        break;
        case '*':
        result=num1*num2;
        std::cout<<result<<"\n";
        break;
        case '/':
        result=num1/num2;
        std::cout<<result<<"\n";
        break;
        default:
        std::cout<<">>> please enter a valid operator <<<<"<<"\n";
        break;
    }
    std::cout<<"*****************************************";
}