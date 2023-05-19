#include <iostream> // used to import the libraries for example the input/output stream <iostream>

namespace first{
    int x =5;
}
                        // see how creating / using a namespace didn't create a conflict when defining a same variable twice.
namespace second{
    int x =10;                  
}

int main(){
    int x =15;
     // std::cout<<x;               //--->gives the locally defined x variable in the int main.
    // std::cout<<first::x;         //---> notice how ( ::) were used to define it to pick the x variable from globally scoped first function and not from local main function
    std::cout<<second::x;           //---> same thing to pick the varable from the second function
}

// also some important things to understand -- std == standard , cout - character output , :: used to define the scoping variables by default locally defined.

/// imporant definition: below  (<< stand for insertion) and (>> stands for exertion operator)

// defining the namespace helps you to remove the need for adding the suffix before calling it , it is just way of telling c++ that hey if i am using namespace it means first Ok !?!
