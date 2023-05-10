#include <iostream>

void saymyname(std::string name);
int main()
{
    int age = 21;
    std::string name="inder";
    saymyname(name);

}

void saymyname(std::string name){
    std::cout<<"happy birthday "<<name;
    
}