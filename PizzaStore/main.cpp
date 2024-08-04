#include "NYStylePizzaStore.hpp"
#include <iostream>
#include "Pizza.hpp"
using namespace std;

int main(){
    PizzaStore *pizzaStore = new NYStylePizzaStore();
    Pizza* chesePizza = pizzaStore->createPizza("cheese");
    std::cout << "Done\n";
    std::cout << "Cheese Pizza :" << chesePizza << std::endl;
    return 0;
}