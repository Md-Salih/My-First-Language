#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    int mileage;

public:
    Car(std::string make, std::string model, int year, int mileage) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->mileage = mileage;
    }

    void displayDetails() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Mileage: " << mileage << std::endl;
    }

    int calculateAge(int currentYear) {
        return currentYear - year;
    }
};

int main() {
    Car car("Toyota", "Camry", 2015, 50000);
    car.displayDetails();
    std::cout << "Age: " << car.calculateAge(2024) << std::endl;
    return 0;
}
