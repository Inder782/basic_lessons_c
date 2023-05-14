#include <iostream>

int main(){
    std::string students[]={"inder","aman","chaman","sandy"};
    char grades[]={'a','b','c','d'};
    
    for(int i=0;i<sizeof(grades)/sizeof(grades[0]);i++){
        std::cout<<grades[i]<<"\n";
    }
    
}