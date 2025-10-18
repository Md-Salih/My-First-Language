#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Loan {
public:
    string name;
    double amount, rate;
    int years;

    Loan(string n,double a,double r,int y):name(n),amount(a),rate(r),years(y){}
    double calcEMI(){
        double monthlyRate = rate / (12*100);
        int months = years*12;
        return (amount * monthlyRate) / (1 - pow(1+monthlyRate, -months));
    }
    void display(){
        cout<<name<<" | Loan: "<<amount<<" | EMI: Rs."<<calcEMI()<<endl;
    }
};

int main(){
    int n; cout<<"Enter number of customers: "; cin>>n;
    vector<Loan> loans;
    for(int i=0;i<n;i++){
        string name; double amt,rate; int yrs;
        cout<<"Enter name, amount, rate%, years: ";
        cin>>name>>amt>>rate>>yrs;
        loans.push_back(Loan(name,amt,rate,yrs));
    }
    ofstream fout("loans.txt");
    cout<<"\n---Loan Details---\n";
    for(auto &l:loans){
        l.display();
        fout<<l.name<<" "<<l.amount<<" "<<l.calcEMI()<<endl;
    }
    fout.close();
}
