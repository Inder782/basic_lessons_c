#include <iostream>

// declaring the function
void checkbalance(double balance);
double depositcash();
double withdrawcash(double balance);
void exit();
// ends here//

int main(){
    int option;
    double balance=0;
    double deposit;
    double cash;
do{
        std::cout<<"***************************"<<"\n";
    std::cout<<"*******BANK PROGRAM********"<<"\n";
    std::cout<<"***************************"<<"\n";
    std::cout<<"Please choose your option "<<"\n";
    std::cout<<"1. Check balance"<<"\n";
    std::cout<<"2.Deposit cash"<<"\n";
    std::cout<<"3.Withdraw cash"<<"\n";
    std::cout<<"4.Exit"<<"\n";
    std::cin>>option;
    std::cin.clear();
    fflush(stdin);
     {
        switch(option){
            case 1: checkbalance(balance);
            break;
            case 2: balance+=depositcash();
                    checkbalance(balance);
            break;
            case 3: balance-=withdrawcash(balance);
            break;
            case 4:exit();
            break;
            default:
            std::cout<<"Please enter a valid option between 1-4."<<"\n";
            break;
    }
}
}while(option!=4);
return 0;
}


void checkbalance(double balance){
    std::cout<<"Your balance is $ "<<balance<<"\n";
}

double depositcash(){
    double deposit=0;
    std::cout<<"Please enter the amount you want to deposit"<<"\n";
    std::cin>>deposit;
    if(deposit<0){
        std::cout<<"Wait a negative amount?";
    }
    else{
        std::cout<<"you deposited $ "<<" "<<deposit;
    }
        
    return deposit;
}

double withdrawcash(double balance){
    double cash=0;
    std::cout<<"Please enter the amount you want to withdraw:"<<"\n";
    std::cin>>cash;
    if(cash>balance){
        std::cout<<"Insufficient funds"<<"\n";
        return 0;
    }
    return cash;
    
}

void exit(){
    std::cout<<"Thanks for visiting :>"<<"\n";
}