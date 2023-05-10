#include <iostream>
using namespace std;

// intiiazling an array
int main(){
int arr[5]={1,2,3,4,6};

for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
    int num=arr[i];
    cout<<num;
}
}

