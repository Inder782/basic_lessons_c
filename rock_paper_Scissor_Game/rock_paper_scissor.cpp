#include <iostream>
#include <ctime>


char userchoice();
void printchoice(char choice);
char systemchoice();
void winner(char userchoice,char systemchoice);

int main(){
    char player=userchoice();
    printchoice(player);
    char computer=systemchoice();
    winner(player,computer);
    
}

char userchoice(){
    char choice;
    std::cout<<"--------------------------------------------------------"<<"\n";
    std::cout<<"***************ROCK PAPER SCISSORS GAME*****************"<<"\n";
    std::cout<<"--------------------------------------------------------"<<"\n";
    
    do{
    std::cout<<"FOR ROCK --->R"<<"\n";
    std::cout<<"FOR PAPER --->P"<<"\n";
    std::cout<<"FOR SCISSORS --->S"<<"\n";
    std::cin>>choice;
    }
    while(choice!='r' && choice=='p' && choice=='s');
    return choice;
}

void printchoice(char choice){
    
    switch(choice){
        case 'r':
        std::cout<<"You choose ROCK"<<"\n";
        break;
        case 'p':
        std::cout<<"You chose Paper"<<"\n";
        break;
        case 's':
        std::cout<<"You chose Scissors"<<"\n";
        break;
        default:
        std::cout<<"Please select something between Rock Paper Scissors :>"<<"\n";
    } 

}

char systemchoice(){
    srand(time(NULL));

    int num=rand()%3+1;
    switch(num){
        case 1:
        std::cout<<"The system Chose ROCK"<<"\n";
        return 'r';
        break;
        case 2:
        std::cout<<"The system Chose PAPER"<<"\n";
        return 'p';
        break;
        case 3:
        std::cout<<"The system chose SCISSORS"<<"\n";
        return 'c';
        break;
    }
    return num;
}
void winner(char player,char computer){
    switch (player){
        case 'r': 
        if(computer=='r'){
            std::cout<<"its a tie";
            }
        else if(computer=='p'){                 // 1 is rock  2 is paper 3 is scissors
                std::cout<<"You lose"<<"\n";
            }
        else{
                std::cout<<"YOU WIn"<<"\n";
            }
        break;
        case 'p': if(computer=='r'){
            std::cout<<"You won";
            }
            else if(computer=='p'){
                std::cout<<"its tie";
            }
            else{
                std::cout<<"YOU lose";
            }
        break;
        case 's': if(computer=='r'){
            std::cout<<"You lose";
            }
            else if(computer=='p'){
                std::cout<<"You win";
            }
            else{
                std::cout<<"Its a tie";
            }
        break;        
        
    }
}


