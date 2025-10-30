#include <iostream>
#include <vector>
using namespace std;

class ATM {
    int balance;
public:
    ATM(int b=10000): balance(b){}
    void withdraw(int amt){
        if(amt<=balance && amt>0){
            balance -= amt;
            cout<<"Withdrawal successful! Remaining: Rs."<<balance<<endl;
        } else cout<<"Invalid amount or insufficient balance!"<<endl;
    }
    void deposit(int amt){
        if(amt>0){
            balance += amt;
            cout<<"Deposited Rs."<<amt<<" | New Balance: Rs."<<balance<<endl;
        }
    }
    void showBalance(){ cout<<"Current Balance: Rs."<<balance<<endl; }
};

int main(){
    ATM atm;
    int ch,amt;
    do{
        cout<<"\n1.Deposit 2.Withdraw 3.Balance 0.Exit\nChoice: ";
        cin>>ch;
        if(ch==1){ cout<<"Enter amount: "; cin>>amt; atm.deposit(amt); }
        else if(ch==2){ cout<<"Enter amount: "; cin>>amt; atm.withdraw(amt); }
        else if(ch==3) atm.showBalance();
    }while(ch!=0);
}
