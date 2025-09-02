#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': 
            if (b != 0) cout << a / b; 
            else cout << "Error: Division by zero!";
            break;
        default: cout << "Invalid operator!";
    }
}
