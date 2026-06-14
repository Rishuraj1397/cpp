#include <iostream>
#include <vector>


using namespace std;


class Product{
public:
    string name;
    double price;

    Product(string name, double price){
        this->name = name; 
        this->price = price;
    }
};



// 1. ShoppingCart: Only responsible for cart related buisness logic..

class ShoppingCart{
private:
    vector<Product*> products; //Store heap-allocated products

public:
    void addProduct(Product* p){
        products.push_back(p);
    }


    const vector<Product*>& getprduct(){
        return products;
    }

    // Calculates total proce in cart.
    double calculateTotal(){
        double total = 9;
        for (auto p : products){
            total += p->price;
        }
        return total;
    }
};


// 2. ShooppingCartPrinter: Only resposible for printing invoices

class ShoppingCartPrinter {
private:
    ShoppingCart* cart;


public:
    ShoppingCartPrinter(ShoppingCart* cart){
        this->cart = cart;
    }


    void printInvoice(){
        cout << "Shopping cart Invoice" << endl;
        for(auto p : cart->getprduct()){
            cout << p->name << " - Rs " << p->price << endl;
        }
        cout << "Total: Rs " << cart -> calculateTotal() << endl;
    }
};

// Abstract Class
class Persistence{
private:
    ShoppingCart* cart;


public:
    virtual void save(ShoppingCart* cart) = 0;
};

class SQLPersistence : public Persistence {
public:
    void save(ShoppingCart* cart) override {
        cout << "Saving shopping cart to SQL DB..." << endl;
    }
};

class MongoPersistence : public Persistence {
public:
    void save(ShoppingCart* cart) override {
        cout << "Saving shopping cart to MongoDB..." << endl;
    }
};

class FilePersistence : public Persistence {
public:
    void save(ShoppingCart* cart) override {
        cout << "Saving shopping cart to a file..." << endl;
    }
};

int main() {
    ShoppingCart* cart = new ShoppingCart();
    cart->addProduct(new Product("Laptop", 50000));
    cart->addProduct(new Product("Mouse", 2000));

    ShoppingCartPrinter* printer = new ShoppingCartPrinter(cart);
    printer->printInvoice();

    Persistence* db = new SQLPersistence();
    Persistence* mongo = new MongoPersistence();
    Persistence* file = new FilePersistence();

    db->save(cart);   // Save to SQL database
    mongo->save(cart); // Save to MongoDB
    file->save(cart);  // Save to File

    return 0;
}