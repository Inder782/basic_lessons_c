#include <iostream>
//there are two types of type conversion --> implicit and explicit


int main(){
    // int x=5.14;          //notice how x can't retain the value beyond the decimals becuase its a int ---> example of implicit type conversion (automatic)
    // double x=5.14;          // now it can
    // double x=(int)5.14;     //example of        explicit type conversion
    // char x= 100;
    // std::cout<<(int)x;      // when doing a conversion from a different class like char to to int it should be done while getting the value.

    //---------------------------------------------//
    // to get how many question are correct when a student gave a exam
    int correct=8;
    int question=10;
    double marks=correct/(double)question *100;         // if you will not convert question into double , the answer will be zero , because its 0.8 (int can't store it)
    std::cout<<marks<<"%";   
}


// definition time

// type conversion is convert a data to another data type
// its two methods are implicit and explicit