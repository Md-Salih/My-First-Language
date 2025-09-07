#include <iostream>
#include <vector>
using namespace std;

class Item {
    string name;
    int quantity;
public:
    Item(string n, int q) : name(n), quantity(q) {}
    void update(int q) { quantity += q; }
    void display() {
        cout << "Item: " << name << " | Quantity: " << quantity << endl;
    }
};

int main() {
    vector<Item> store;
    store.push_back(Item("Apples", 10));
    store.push_back(Item("Bananas", 20));

    store[0].update(5);
    store[1].update(-3);

    cout << "Inventory:\n";
    for (auto &i : store) i.display();
}
