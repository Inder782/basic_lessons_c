#include <iostream>

// size of operator usage - it determines the size in bytes of a variable , data type , class ,objects etc.

int main(){

    char grades[]={'a','b','c','d','e'};
    bool student=true;
    char grade='f';
    std::string name="inder";
    double gpa=2.5;

    std::cout<<sizeof(grades)<<"\n";  //used the size of operator

    //to calculate how many itmes are there in an array the size of the array can be divided by the data type to get the elements for example

    std::cout<<sizeof(grades)/sizeof(char)<<" elements"<<"\n"; // now you may ask why?? because

    // size of a char is ?
    std::cout<<sizeof(char)<<"\n"; //  output 1 bytes

    // size of grades is ??
    std::cout<<sizeof(grades)<<"\n"; // output 5 byes

    // therefore sizeofgrades i.e 5 bytes by size of a char which 1 bytes gives the output 5 which is the total number of element in the array
    // you can also use the size of the first item of the array to calculate the number of elements in the array.
}