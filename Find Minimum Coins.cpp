#include <iostream>
#include <vector>
using namespace std;

int main(){
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;

    vector<int> coins = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    vector<int> used;

    for(int c:coins){
        while(amount>=c){
            amount -= c;
            used.push_back(c);
        }
    }

    cout<<"Coins used: ";
    for(int c:used) cout<<c<<" ";
    cout<<"\nTotal coins: "<<used.size();
}
