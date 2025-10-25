#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cout << "Enter n and target sum: ";
    cin >> n >> target;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for(int i=0;i<n;i++) cin >> arr[i];

    int sum = 0, start = 0;
    for(int end=0; end<n; end++) {
        sum += arr[end];
        while(sum > target) sum -= arr[start++];
        if(sum == target)
            cout << "Subarray found from index " << start << " to " << end << endl;
    }
}
