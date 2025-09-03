//overloading (polymorphism)
//function overloading example 
//exp13d

#include <iostream>
using namespace std ;

class Pizza {
    public :
    // Order a small pizza
    string orderPizza(string type) {
        return "Ordered a regular " + type + " pizza.";
    }
    //Pizza other than regular size 
    string orderPizza(string type, string size) {
        return  "Ordered a " + size + " " + type + " pizza.";
    }
    //With extra cheese 
        string orderPizza(string type, string size, bool extraCheese) {
        string order = "Ordered a " + size + " " + type + " pizza";
        if (extraCheese) order += " with extra cheese";
        order += ".";
        return order;
    }
};

int main() {
    Pizza shop;

    cout << shop.orderPizza("Margherita") << endl;              
    cout << shop.orderPizza("Pepperoni", "Medium") << endl;   
    cout << shop.orderPizza("Veggie", "Large", true) << endl;   

    return 0;
}



