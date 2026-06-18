#include<iostream>
#include<vector>


using namespace std;

// Product class representing any item of any ecommerce.
class Product{
public: 
    string name;
    double price;


    Product(string name, double price){
        this->name = name;
        this->price = price;
    }
};


// Voilating srp : ShoppingCart is handeling multiple resposinilities

class ShoppingCart{
private: 
    vector<Product*> products;

public:
    void addProduct(Product* p){
        products.push_back(p);
    }

    const vector<Product*>& getProduct(){
        return products;
    }


    // 1. Calculate total price in cart.

    double calculateTotal(){
        double total = 0;
        for (auto p : products){
            total += p->price;
        }
        return total;
    }

    //  Voilating SRP - Prints invoice (should be in a separate class)

    void printInvoice(){
        cout << "Shopping Cart Invoice: " << endl;
        for(auto p : products){
            cout << p->name << " - Rs " << p->price << endl;
        }
        cout << "Total: Rs " << calculateTotal() << endl;
    }

    // Voilating SRP - saves to Db (should be in separate class)

    void saveToDatabase(){
        cout << "Saving shopping cart to databse..." << endl;
    }
};

int main(){
    ShoppingCart* cart = new ShoppingCart();

    cart->addProduct(new Product("Laptop", 50000));
    cart->addProduct(new Product("Mouse", 2000));

    cart->printInvoice();
    cart->saveToDatabase();

    
    return 0;
}