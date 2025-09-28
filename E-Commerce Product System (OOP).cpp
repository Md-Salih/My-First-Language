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
        cout << "Product: " << name << " | Price: Rs." << price << endl;
    }
};

class Electronic : public Product {
    int warranty;
public:
    Electronic(string n, double p, int w) : Product(n,p), warranty(w) {}
    void display() override {
        cout << "Electronic: " << name << " | Price: Rs." << price 
             << " | Warranty: " << warranty << " years" << endl;
    }
};

int main() {
    vector<Product*> items;
    items.push_back(new Product("Shirt", 800));
    items.push_back(new Electronic("Laptop", 55000, 2));

    for (auto p : items) p->display();
}
