#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class Cache {
private:
    int capacity;
    list<int> order;
    unordered_map<int, list<int>::iterator> map;

public:
    Cache(int capacity) {
        this->capacity = capacity;
    }

    void insert(int key) {
        if (map.find(key) != map.end()) {
            order.erase(map[key]);
        } else if (order.size() >= capacity) {
            map.erase(order.front());
            order.pop_front();
        }
        order.push_back(key);
        map[key] = --order.end();
    }

    void display() {
        for (int value : order)
            cout << value << " ";
        cout << endl;
    }
};

int main() {
    Cache cache(3);
    cache.insert(1);
    cache.insert(2);
    cache.insert(3);
    cache.display(); // Output: 1 2 3
    cache.insert(4);
    cache.display(); // Output: 2 3 4
    cache.insert(2);
    cache.display(); // Output: 3 4 2
    return 0;
}
