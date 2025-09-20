#include <iostream>
#include <vector>
using namespace std;

class Product {
protected:
    string name;
    double price;
public:
    Product(string n, double p) : name(n), price(p) {}
    virtual void display() {
        cout << name << " - Rs." << price << endl;
    }
    double getPrice() { return price; }
};

class DiscountedProduct : public Product {
    double discount;
public:
    DiscountedProduct(string n, double p, double d) : Product(n,p), discount(d) {}
    void display() override {
        cout << name << " - Rs." << price * (1-discount/100) 
             << " (Discount " << discount << "%)" << endl;
    }
};

int main() {
    vector<Product*> cart;
    cart.push_back(new Product("Shoes", 2000));
    cart.push_back(new DiscountedProduct("Watch", 3000, 20));

    double total = 0;
    for (auto p : cart) {
        p->display();
        total += p->getPrice();
    }
    cout << "Total Price: Rs." << total;
}
