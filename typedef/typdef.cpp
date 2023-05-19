// way of giving the existing function a name of your choice , for the sake of code readability and reduce typos.

#include <iostream>

// typedef std::string  yo_t;                  // first example
// typedef int number_t;
// int main(){
//     number_t age = 15;                      //notice as i defined that when i say number_t it means int
//     yo_t firstname="inder";                 //here what i did was say to c++ that hey !! where there is yo_t assume i wrote std::string
//     std::cout<<age;
//     }

// more productive way of doing it using the "using" keyword as it is more suitable for templates

//example

using yo_t =std::string;
using number_t =int;

int main(){
number_t age=15;
yo_t name="inder";

std::cout<<age<<"\n";               // "\n" means that ti break a line.
std::cout<<name<<"\n";

}

// definition

// reserved keyword used to create an additional name(alias) for the another data type 
// new identifier for an existing data type.
// helps with readability 
// use when there is clear advantage.
// replaced with 'using' ( works well with templates)

// and of course the shortest defintion is :
// // "way of giving the existing data type a name of your choice , for the sake of code readability and reduce typos."

