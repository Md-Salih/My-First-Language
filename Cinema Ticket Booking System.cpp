#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Ticket {
public:
    string movie;
    int seats;
    double price;
    Ticket(string m,int s,double p):movie(m),seats(s),price(p){}
    double total() { return seats*price; }
    void display() {
        cout << movie << " | Seats: " << seats 
             << " | Total: Rs." << total() << endl;
    }
};

int main() {
    vector<Ticket> bookings;
    int n;
    cout << "Enter number of bookings: ";
    cin >> n;
    for(int i=0;i<n;i++){
        string m; int s; double p;
        cout << "Enter movie, seats, price: ";
        cin >> m >> s >> p;
        bookings.push_back(Ticket(m,s,p));
    }

    ofstream fout("tickets.txt");
    for(auto &t: bookings){
        t.display();
        fout << t.movie << " " << t.seats << " " << t.total() << endl;
    }
    fout.close();
}
