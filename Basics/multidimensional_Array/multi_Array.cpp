#include <iostream>

int main(){        //r c                    //first rows then columns
    std::string cars[][3]={{"eon","neon","cheon"},
                        {"Mustang","creta","breeza"},
                        {"Fiesta","cruze","truze"}};
// std::cout<<cars[0][0];          // this will display the item at 0th row and 0th columns

// how will you define size in a multidimensional array?

int columns=sizeof(cars[0])/sizeof(cars[0][0]);   // 3 elements * 24 per string = 72 bytes && 72/24 =3 columns
int rows=sizeof(cars)/sizeof(cars[0]);            // size of cars will be the whole array 24*9 =216 and size of string at [0] will be 72 therefore 216/72=3

for (int i=0;i<rows;i++){
    for(int j =0;j<columns;j++){
        std::cout<<cars[i][j]<<" ";
    }
    std::cout<<"\n";
}
}