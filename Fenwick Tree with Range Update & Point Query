#include <bits/stdc++.h>
using namespace std;

class Fenwick {
public:
    int n;
    vector<int> bit;

    Fenwick(int n){
        this->n = n;
        bit.assign(n+1, 0);
    }

    void add(int i,int v){
        for(; i <= n; i += i & -i)
            bit[i] += v;
    }

    void rangeUpdate(int l,int r,int val){
        add(l,val);
        add(r+1,-val);
    }

    int get(int i){
        int s = 0;
        for(; i > 0; i -= i & -i)
            s += bit[i];
        return s;
    }
};

int main(){
    Fenwick fw(10);

    fw.rangeUpdate(2,5,10);
    fw.rangeUpdate(4,7,5);

    cout << fw.get(3) << endl;
    cout << fw.get(5) << endl;
}
