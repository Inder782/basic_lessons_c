#include <iostream>

int main(){
    int user_size;
    std::cout<<"Enter the size you want to start :";
    std::cin>>user_size;
    std::cin.ignore();
    std::string food[user_size];
    std::string temp;

    int size=sizeof(food)/sizeof(food[0]);

    for(int i =0;i<size;i++){
    std::cout<<"Enter the food you like for #"<<i+1<<": "<<"\n";
    std::getline(std::cin,temp);  
    if(temp=="q"){
        break;
    }
    else{
        food[i]=temp;
    }  
    }
    std::cout<<"The food you like are"<<"\n";
   for(int i=0;!food[i].empty();i++){
    std::cout<<food[i]<<"\n";
   }
    
}