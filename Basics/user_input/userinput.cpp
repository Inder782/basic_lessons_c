#include <iostream>

// cin is used to get input from a user  also the operators are << (output something also called insertion operator) and (>>) these are called extraction opertor meaning that we want ]
// to extract something from here

// int main (){
// //     std::string name;
// //     int age;
// //     std::cout<<"what your name buddy?";
// //     std::cin>>name;
// //     std::cout<<"hello "<<name<<"!"<<"\n";
// //     std::cout<<"whats you age? "<<name<<"\n";                   // the problem here is that it doesn' take a line instead it takes a single string as inder not inder singh chandel
// //     std::cin>>age;
// //     std::cout<<"oh so you are "<<age<<" years old !";
// // }

// thats why we will use get line function

int main(){
    std::string name;
    int age;

    std::cout<<"whats you age? "<<name<<"\n";
    std::cin>>age;
    std::cout<<"what your name buddy?";

    std::getline(std::cin>> std::ws,name);                        //using get line to get the full name
    
    std::cout<<"hello "<<name<<"!"<<"\n";
    
    std::cout<<"oh so you are "<<age<<" years old !";
}

// simply put if your string includes spaces like inder singh use standard white spaces as ( std::ws)