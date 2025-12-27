#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    int cap;
    list<pair<int,int>> dq;
    unordered_map<int, list<pair<int,int>>::iterator> mp;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if(!mp.count(key)) return -1;
        auto it = mp[key];
        int value = it->second;

        dq.erase(it);
        dq.push_front({key,value});
        mp[key] = dq.begin();
        return value;
    }

    void put(int key, int value) {
        if(mp.count(key)){
            dq.erase(mp[key]);
        }
        else if(dq.size() == cap){
            auto last = dq.back();
            mp.erase(last.first);
            dq.pop_back();
        }

        dq.push_front({key,value});
        mp[key] = dq.begin();
    }
};

int main(){
    LRUCache cache(2);
    cache.put(1,10);
    cache.put(2,20);
    cout << cache.get(1) << endl;
    cache.put(3,30);
    cout << cache.get(2) << endl;
}
