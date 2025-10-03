#include <iostream>
#include <vector>
using namespace std;

class Flight {
protected:
    string flightNo;
    int seats;
public:
    Flight(string f, int s) : flightNo(f), seats(s) {}
    virtual void display() {
        cout << "Flight: " << flightNo << " | Seats: " << seats << endl;
    }
};

class Reservation : public Flight {
    string passenger;
public:
    Reservation(string f, int s, string p) : Flight(f,s), passenger(p) {}
    void display() override {
        cout << "Passenger: " << passenger 
             << " | Flight: " << flightNo 
             << " | Seats Booked: " << seats << endl;
    }
};

int main() {
    vector<Flight*> bookings;
    bookings.push_back(new Flight("AI202", 150));
    bookings.push_back(new Reservation("AI202", 2, "Alice"));

    for (auto b : bookings) b->display();
}
