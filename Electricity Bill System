#include <iostream>
using namespace std;

class Bill {
    string name;
    int units;
public:
    Bill(string n,int u):name(n),units(u){}
    double calculate(){
        if(units<=100) return units*1.2;
        else if(units<=300) return 100*1.2+(units-100)*2;
        else return 100*1.2+200*2+(units-300)*3;
    }
    void show(){
        cout<<"Customer: "<<name<<" | Units: "<<units
            <<" | Bill: Rs."<<calculate()<<endl;
    }
};

int main(){
    int n; cout<<"Enter number of customers: "; cin>>n;
    for(int i=0;i<n;i++){
        string name; int units;
        cout<<"Enter name and units: ";
        cin>>name>>units;
        Bill b(name,units);
        b.show();
    }
}
