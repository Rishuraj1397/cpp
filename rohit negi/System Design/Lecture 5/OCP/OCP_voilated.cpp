#include<iostream>
#include<vector>

using namespace std;


// Product class representing any item in eCommerce.
class Product{
public:
    string name;
    double price;

    Product(string name, double price){
        this->name = name;
        this->price = price;
    }
};


// 1. shoppingCart: Only resposible for cart related business logic.

class Shoppingcart{
private:
    vector<Product*> products;


public:
    void addProduct(Product* p){
        products.push_back(p);
    }


    const vector<Product*>& getProduct(){
        return products;
    }

    // Calculate total price in the cart

    double calculateTotal(){
        double total = 0;
        for(auto p : products){
            total += p->price;
        }
        return total;
    }
};


// 2. ShoppingCartPrinter: Only resposicle for printing invoices 

class ShoppingCartPrinter{
private:
    Shoppingcart* cart;

public:
    ShoppingCartPrinter(Shoppingcart* cart){
        this->cart = cart;
    }


    void printInvoice(){
        cout << "Shopping Cart Invoice: " << endl;
        for(auto p : cart->getProduct()){
            cout << p->name << " - Rs " << p->price << endl;
        }
        cout << "Total: Rs " << cart->calculateTotal() << endl;
    }


};

// 3. ShoppingCartStorage: Only resposible for saving cart to DB

class ShoppingCartStorage{
private:
    Shoppingcart* cart;

public:
    ShoppingCartStorage(Shoppingcart* cart){
        this->cart = cart;
    }


    void saveToSQLDatabase() {
        cout << "Saving shopping cart to SQL DB..." << endl;
    }


    void saveToMongoDatabase(){
        cout << "Saving shopping cart to Mongo DB...." << endl;
    }

    void saveToFile() {
        cout << "Saving shopping cart to File..." << endl;
    }

};


int main(){
    Shoppingcart* cart = new Shoppingcart();
    cart->addProduct(new Product("Laptop", 50000));
    cart->addProduct(new Product("Mouse", 2000));

    ShoppingCartPrinter* printer = new ShoppingCartPrinter(cart);
    printer->printInvoice();

    ShoppingCartStorage* db = new ShoppingCartStorage(cart);
    db->saveToSQLDatabase();
}