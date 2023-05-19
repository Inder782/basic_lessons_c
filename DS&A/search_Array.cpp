#include <iostream>
// int searcharray(int array[],int size,int element);           // practice
// int main(){
//     int number[]={1,2,34,5,9,547,87};
//     int size=sizeof(number)/sizeof(number[0]);

//     int index;
//     int mynum;          // number you want to find

//     std::cout<<"Enter the number you want to find: "<<"\n";
//     std::cin>>mynum;
//     index=searcharray(number,size,mynum);
//     if(index!=-1){
//         std::cout<<"my index number "<<mynum<<" is at "<<index;
//     }
//     else{
//         std::cout<<"index not found";
//     }


//     return 0;
// }

// int searcharray(int array[],int size,int element){
//     for (int i =0;i<size;i++){
//         if (array[i]==element){
//             return i;
//         }
//     }
//         return -1;
//         }
int searchfood(std::string array[],int size,std::string element );
int main(){
    std::string foods[]={"dal","roti","butter naan","shahi panner"};
    int size=sizeof(foods)/sizeof(foods[0]);
    std::string myfood;
    int foodplace;
    std::cout<<"Enter the food name you want to find index for :"<<"\n";
    std::getline(std::cin,myfood);
    foodplace=searchfood(foods,size,myfood);
    if(foodplace!=-1){
        std::cout<<foodplace;
    }
    else{
        std::cout<<"Food name not found";
    }

}

int searchfood(std::string array[],int size,std::string element ){
    for (int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}