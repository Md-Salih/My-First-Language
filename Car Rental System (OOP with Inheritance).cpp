#include <iostream>
#include <vector>
using namespace std;

class Car {
protected:
    string model;
    double rate;
public:
    Car(string m, double r) : model(m), rate(r) {}
    virtual void display() {
        cout << "Car: " << model << " | Rate: " << rate << " per day\n";
    }
};

class LuxuryCar : public Car {
    bool chauffeur;
public:
    LuxuryCar(string m, double r, bool c) : Car(m,r), chauffeur(c) {}
    void display() override {
        cout << "Luxury Car: " << model << " | Rate: " << rate 
             << " per day | Chauffeur: " << (chauffeur ? "Yes" : "No") << endl;
    }
};

int main() {
    vector<Car*> cars;
    cars.push_back(new Car("Sedan", 2000));
    cars.push_back(new LuxuryCar("BMW", 8000, true));

    for (auto c : cars) c->display();
}
