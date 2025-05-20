#include <iostream>
#include <string>

class LibraryBook {
private:
    std::string title;
    std::string author;
    int publicationYear;
    std::string borrower;

public:
    LibraryBook(std::string title, std::string author, int publicationYear) {
        this->title = title;
        this->author = author;
        this->publicationYear = publicationYear;
        this->borrower = "";
    }

    void displayDetails() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
        if (!borrower.empty()) {
            std::cout << "Borrower: " << borrower << std::endl;
        } else {
            std::cout << "Available" << std::endl;
        }
    }

    void checkOut(std::string borrower) {
        if (this->borrower.empty()) {
            this->borrower = borrower;
            std::cout << "Book checked out to " << borrower << std::endl;
        } else {
            std::cout << "Book is already checked out" << std::endl;
        }
    }
};

int main() {
    LibraryBook book("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    book.displayDetails();
    book.checkOut("John Doe");
    book.displayDetails();
    return 0;
}


