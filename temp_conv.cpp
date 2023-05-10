#include <iostream>

int main(){
    double temp;
    char unit;
    std::cout<<"*************Temprature Converter**************"<<"\n";
    std::cout<<"Enter F for farenheit"<<"\n";
    std::cout<<"Enter C for celsius"<<"\n";
    std::cout<<" What unit would you like to convert to :->";
    std::cin>>unit;
    if(unit=='F' || unit=='f'){
        std::cout<<"Enter the temprature in Celsius:->";
        std::cin>>temp;
        temp=(1.8*temp)+32.0;
        std::cout<<"The temprature is "<<(int)temp<<" Farenheit";
    }
    else if(unit =='C'|| unit=='c'){
        std::cout<<"Enter the temprature in Farenheit:->";
        std::cin>>temp;
        temp=(temp-32)/1.8;
        std::cout<<"The temprature in farenhiet is "<<(int)temp;
    }
    else{
        std::cout<<"Please enter either F or H";
    }
    }

