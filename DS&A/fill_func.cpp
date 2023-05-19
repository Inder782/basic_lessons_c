#include <iostream>

// fill - a function used to fill values to a certain range
// fill(begin,end,value)

int main(){
    int size=50;
    std::string food[size];
    

    fill(food,food+(size/2),"burger");
    fill(food+(size/2),food+(size/5*3),"pizza");
    fill(food+(size/5*3),food+size,"jelly");
    for(std::string foods:food){
        std::cout<<foods<<"\n";
    }

    
}
