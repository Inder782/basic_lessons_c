#include <iostream>
#include <ctime>
int main(){
    int num;
    int guess;
    int tries=0;
    srand(time(NULL));
    num=(rand()%100)+1;
    std::cout<<"*********Number guessing game*****************************"<<"\n";
    do{
        std::cout<<"Enter a number between 1-100"<<'\n';
        std::cin>>guess;
        tries++;

        if(guess>num){
            std::cout<<"too high"<<"\n";
        }
        else if(guess<num){
            std::cout<<"A little higher"<<"\n";
        }
        else{
            std::cout<<"You are are correct "<<"the tries you took are-->"<<tries<<"\n";
        }
    
    }while(guess!=num);
    std::cout<<"***********************Games ends*************************";

}