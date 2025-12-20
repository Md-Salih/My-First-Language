#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    deque<int> dq;

    for (int i = 0; i < nums.size(); i++) {
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();

        dq.push_back(i);

        if (i >= k - 1)
            cout << nums[dq.front()] << " ";
    }
    return 0;
}
