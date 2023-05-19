#include <iostream>

// used to return a thing to the main function.
double square(double length);
double cube(double length);
int main(){
    double l=5.0;
    double area=square(l);
    double cubes=cube(l);
    std::cout<<"the area of square is-->"<<area<<"\n";
    std::cout<<"the cube of square is-->"<<cubes;
}

double square(double length){
    return length*length;
}

double cube(double length){
    return length*length*length;
}