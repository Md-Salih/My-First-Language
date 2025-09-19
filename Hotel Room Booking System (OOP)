#include <iostream>
#include <vector>
using namespace std;

class Room {
protected:
    int number;
    bool booked;
public:
    Room(int n) : number(n), booked(false) {}
    virtual void display() {
        cout << "Room " << number << " | " << (booked ? "Booked" : "Available") << endl;
    }
    void book() { booked = true; }
};

class DeluxeRoom : public Room {
    bool seaView;
public:
    DeluxeRoom(int n, bool v) : Room(n), seaView(v) {}
    void display() override {
        cout << "Deluxe Room " << number << " | " 
             << (booked ? "Booked" : "Available") 
             << " | Sea View: " << (seaView ? "Yes" : "No") << endl;
    }
};

int main() {
    vector<Room*> hotel;
    hotel.push_back(new Room(101));
    hotel.push_back(new DeluxeRoom(201, true));

    hotel[0]->book();

    for (auto r : hotel) r->display();
}
