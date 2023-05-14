#include <iostream>


// array = a data structure that holds multiple values , they are accesses using index number.

int main(){
    std::string car[]={"MARUTI","MUSTANG","ALTO"};

    // to change something in an array
    car[0]="Ferrari";

    //--> array can only consist data of same types.

    std::cout<<car[0]<<"\n";
    std::cout<<car[1]<<"\n";
    std::cout<<car[2]<<"\n";    

    double prices[]={5.00,7.50,9.99,15};
    std::cout<<prices[0]<<"\n";
    std::cout<<prices[1]<<"\n";
    std::cout<<prices[2]<<"\n";
    std::cout<<prices[3]<<"\n";
    
}