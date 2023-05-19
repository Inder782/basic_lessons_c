//this file is for variables assignment
#include <iostream>
using namespace std;


//calling all the function
char alpha();
int var();
float number();
bool yesno();
int myarray();
//main function
int main(){
    var();
    alpha();
    number();
    yesno();
    myarray();
}
// assigning as integer
int var(){
    int x=5;
    cout<<x<<"\n";
    return 0;
}

//assigning a char

char alpha(){
    char x = 'y';
    cout<<x<<'\n';
    return 0;
}

//assigning a float
float number(){
    float t =0.124;
    cout<<t<<"\n";
    return 0;
}

//boolean values

bool yesno(){
    bool israining=true;
    bool issunny=false;

    cout<<"is it raining?"<<boolalpha<<israining<<endl;
    cout<<"is it sunny?"<<boolalpha<<issunny<<endl;
    return 0;
}
int myarray(){
int arr[5];
arr[0]=5;
arr[1]=6;
arr[2]=7;
arr[3]=8;
arr[4]=9;

for(int i=0;i<5;i++){
    cout<<arr[i];
}
return 0;
}