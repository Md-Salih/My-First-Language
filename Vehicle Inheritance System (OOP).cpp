#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {}
    virtual void display() {
        cout << "Vehicle Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
    int seats;
public:
    Car(string b, int s) : Vehicle(b), seats(s) {}
    void display() override {
        cout << "Car Brand: " << brand << " | Seats: " << seats << endl;
    }
};

int main() {
    Vehicle *v1 = new Vehicle("Generic");
    Vehicle *v2 = new Car("Tesla", 5);

    v1->display();
    v2->display();
}
