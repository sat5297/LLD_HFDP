/**
 * This is a NULL Design Pattern in which we don't return if a type of pizza don't have a concrete class. We return NullPizza;
*/

#include "Pizza.hpp"

class NullPizza : public Pizza{
  public:
    NullPizza(){
        name = "NULL Pizza";
        dough = "NO Crust";
        sauce = "No Sauce";
    }
};