#include <iostream>

int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            std::cout<<"- ";
        }
        std::cout<<"*"<<"\n";
    }

    for(int i=10;i>0;i--){
        for(int j=0;j<i-1;j++){
            std::cout<<"- ";
        }
        std::cout<<"*"<<"\n";
        }
}
