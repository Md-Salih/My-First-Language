#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,B; 
    cin >> n >> B;
    vector<int> cost(n);
    for(int i=0;i<n;i++) cin >> cost[i];

    sort(cost.begin(), cost.end());
    int delivered = 0;

    for(int c : cost){
        if(B >= c){
            B -= c;
            delivered++;
        } else break;
    }

    cout << "Delivered to " << delivered << " houses\n";
}
