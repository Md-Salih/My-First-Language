#include <iostream>
#include <vector>
using namespace std;

class Ticket {
protected:
    int number;
    string passenger;
public:
    Ticket(int n, string p) : number(n), passenger(p) {}
    virtual void display() {
        cout << "Ticket No: " << number << " | Passenger: " << passenger << endl;
    }
};

class BusinessTicket : public Ticket {
    string loungeAccess;
public:
    BusinessTicket(int n, string p, string l) : Ticket(n,p), loungeAccess(l) {}
    void display() override {
        cout << "Business Ticket No: " << number << " | Passenger: " 
             << passenger << " | Lounge: " << loungeAccess << endl;
    }
};

int main() {
    vector<Ticket*> tickets;
    tickets.push_back(new Ticket(1001, "Alice"));
    tickets.push_back(new BusinessTicket(2001, "Bob", "Yes"));

    for (auto t : tickets) t->display();
}
