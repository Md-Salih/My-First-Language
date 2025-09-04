#include <iostream>
#include <vector>
using namespace std;

class Book {
    string title, author;
    int year;
public:
    Book(string t, string a, int y) : title(t), author(a), year(y) {}
    void display() {
        cout << title << " by " << author << " (" << year << ")" << endl;
    }
};

int main() {
    vector<Book> library;
    library.push_back(Book("C++ Primer", "Stanley Lippman", 2012));
    library.push_back(Book("Effective C++", "Scott Meyers", 2005));

    cout << "Library Collection:\n";
    for (auto &b : library) b.display();
}
