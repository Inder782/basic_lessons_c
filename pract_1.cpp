// aim - to calculate the hypotenuse of a traingle which is a^2+b^

#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;          // initialize the variables where c = a^2+b^2
    std::cout<<"tell the first side"<<"\n";
    std::cin>>a;
    std::cout<<"tell the second side"<<"\n";
    std::cin>>b;

    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);
    std::cout<<"the side c is "<<c;

}