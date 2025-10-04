#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    for (int n : nums) freq[n]++;

    priority_queue<pair<int,int>> pq;
    for (auto &p : freq) pq.push({p.second, p.first});

    vector<int> result;
    for (int i=0; i<k && !pq.empty(); i++) {
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
}

int main() {
    int n,k;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter k: ";
    cin >> k;

    vector<int> ans = topKFrequent(arr,k);
    cout << "Top " << k << " frequent elements:\n";
    for (int x : ans) cout << x << " ";
}
