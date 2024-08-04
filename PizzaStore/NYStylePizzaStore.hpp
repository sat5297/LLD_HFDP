/**
 * This is a concrete class of PizzaStore.
 * This implements the Pizza Store abstract class.
*/
#pragma once
#include "PizzaStore.hpp"
#include "NYStyleCheesePizza.cpp"
#include <iostream>
using namespace std;


class NYStylePizzaStore : public PizzaStore{
  public:
    Pizza *pizza;
    virtual ~NYStylePizzaStore(){};
    virtual Pizza* createPizza(std::string type) {
        std::cout << "Creating Pizza\n";
        pizza = new NYStyleCheesePizza();
        std::cout << pizza << std::endl;
        std::cout << &pizza ;
        return pizza;
    }
};