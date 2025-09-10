#include <iostream>
#include <vector>
using namespace std;

class Product {
    string name;
    double price;
public:
    Product(string n, double p) : name(n), price(p) {}
    double getPrice() { return price; }
    string getName() { return name; }
};

class Cart {
    vector<Product> items;
public:
    void addProduct(Product p) { items.push_back(p); }
    void display() {
        double total = 0;
        cout << "Cart items:\n";
        for (auto &p : items) {
            cout << p.getName() << " - Rs." << p.getPrice() << endl;
            total += p.getPrice();
        }
        cout << "Total = Rs." << total << endl;
    }
};

int main() {
    Product p1("Laptop", 55000);
    Product p2("Phone", 25000);

    Cart cart;
    cart.addProduct(p1);
    cart.addProduct(p2);
    cart.display();
}
