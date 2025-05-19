#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(std::string accountNumber, std::string accountHolderName, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited: " << amount << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn: " << amount << std::endl;
        } else {
            std::cout << "Insufficient balance" << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account("123456789", "John Doe", 1000.0);
    account.displayBalance();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayBalance();
    return 0;
}
