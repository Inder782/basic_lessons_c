#include <iostream>

double getotal(double prices[],int size);

int main(){
    double prices[]={49,59,69,78};
    int size=sizeof(prices)/sizeof(prices[0]);
    double total=getotal(prices,size);
    std::cout<<"$"<<total;

}

double getotal(double prices[],int size){
    double total=0;
    for (int i=0;i<size;i++){
        total+=prices[i];
    }
    return total;
}