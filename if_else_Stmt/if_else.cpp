#include <iostream>

// if statements stands for do a thing if the condition is true , else simply don't do it

int main(){
    int age;
    std::cout<<"tell me your age:";
    std::cin>>age;
    if(age>=100){
        std::cout<<"this is not for your age , bye !!";
    }
    else if(age>=18){
        std::cout<<"welcome to the site";
    }
    else if(age<0){
        std::cout<<"whhaaat ????";
    }

    else{
        std::cout<<"you are not old enough kiido";
    }
}