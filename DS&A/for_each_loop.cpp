#include <iostream>

int main(){
    std::string student[]={"spongebob","squarpants","octopus"};
//     for (int i=0;i<sizeof(student)/sizeof(student[0]);i++){
//         std::cout<<student[i]<<"\n";
//     }
    // now a example of for each loop

    for(std::string students:student){
        std::cout<<students<<"\n";
    }

    int grades[]={65,72,93};

    for(int grade:grades){
        std::cout<<grade<<"\n";
    }
}