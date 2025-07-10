#include <iostream>
#include <list>
using namespace std;

class HashTable {
private:
    int size;
    list<int>* table;

public:
    HashTable(int size) {
        this->size = size;
        table = new list<int>[size];
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << "Index " << i << ": ";
            for (int value : table[i])
                cout << value << " ";
            cout << endl;
        }
    }
};

int main() {
    HashTable hashTable(10);
    hashTable.insert(1);
    hashTable.insert(2);
    hashTable.insert(11);
    hashTable.display();
    return 0;
}
