#include <iostream>

void bakepizza(std::string topping1);
void bakepizza(std::string topping1,std::string topping2);

int main(){
    bakepizza("honey","mayonise");
    return 0;
}

void bakepizza(){
    std::cout<<"pizza bake"<<"\n";
}
void bakepizza(std::string topping1){
    std::cout<<"here is your pizza with "<<topping1;
}
void bakepizza(std::string topping1,std::string topping2){
    std::cout<<"here is your topping1 pizza with "<<topping1<<" and "<<topping2<<".";
}

