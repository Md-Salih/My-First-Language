#include <iostream>
#include <queue>
using namespace std;

int main(){
    int t; cin >> t;
    queue<int> N,S,E;
    int n,s,e,x;

    cin >> n;
    while(n--) cin >> x, N.push(x);

    cin >> s;
    while(s--) cin >> x, S.push(x);

    cin >> e;
    while(e--) cin >> x, E.push(x);

    string lanes[3] = {"North","South","East"};
    queue<int>* Q[3] = {&N,&S,&E};

    int idx = 0, timer = 10;

    for(int sec=1; sec<=t; sec++){
        cout << "Second " << sec << ": " << lanes[idx] << " GREEN\n";

        if(!Q[idx]->empty())
            Q[idx]->pop();

        timer--;

        if(timer == 0 || Q[idx]->empty()){
            idx = (idx+1)%3;
            timer = 10;
        }
    }
}
