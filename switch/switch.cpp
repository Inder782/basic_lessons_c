#include <iostream>


// program no.1
// int main(){
//     int number;
//     std::cout<<"Please enter a number in between (1-12):";
//     std::cin>>number;
//     switch(number){
//         case 1:
//         std::cout<<"this is january";
//         break;
//         case 2:
//         std::cout<<"this is february";
//         break;
//         case 3:
//         std::cout<<"this is march";
//         break;
//         case 4:
//         std::cout<<"this is april";
//         break;
//         case 5:
//         std::cout<<"this is may";
//         break;
//         case 6 :
//         std::cout<<"this is june";
//         break;
//         case 7 :
//         std::cout<<"this is july";
//         break;
//         case 8 :
//         std::cout<<"this is august";
//         break;
//         case 9:
//         std::cout<<"this is september";
//         break;
//         case 10:
//         std::cout<<"this is october";
//         break;
//         case 11:
//         std::cout<<"this is november";
//         break;
//         case 12:
//         std::cout<<"this is december";
//         default:
//         std::cout<<"Please enter a number between (1-12)";
//     }
// }

int main()
{   char grade;
    std::cout<<"please enter your grade:";
    std::cin>>grade;
    switch(grade){
        case 'A':
        std::cout<<"you did well";
        break;
        case 'B':
        std::cout<<"you did ok";
        break;
        case 'C':
        std::cout<<"you were ok ok , not that good nor that bad";
        break;
        case 'D':
        std::cout<<"work hard kiido";
        break;
        case 'E':
        std::cout<<"you just got pass by luck";
        break;
        case 'F':
        std::cout<<"you failed :>";
        break;
        default:
        std::cout<<"please enter the grade in between A-F to know xd :>>";
        break;
    }
}