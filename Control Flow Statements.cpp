#include <iostream>
using namespace std;

int main() {
    // 1. IF-ELSE IF-ELSE
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13) {
        cout << "You are a child." << endl;
    } else if (age >= 13 && age < 18) {
        cout << "You are a teenager." << endl;
    } else {
        cout << "You are an adult." << endl;
    }

 // 2. SWITCH CASE
    int day;
    cout << "\nEnter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid day\n";
    }
    
return 0;
}

