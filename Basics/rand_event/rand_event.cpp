#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum=rand()%5+1;
    switch(randNum){
        case 1:std::cout<<"You won a sticker"<<"\n";
        break;
        case 2:std::cout<<"You won a t-shirt"<<"\n";
        break;
        case 3:std::cout<<"You won a card"<<"\n";
        break;
        case 4:std::cout<<"You won a 100 ruppes"<<"\n";
        break;
        case 5:std::cout<<"You won a something i don't know"<<"\n";
        break;
        default:std::cout<<"Better luck next time :< "<<"\n";
    }
}