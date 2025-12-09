#include <bits/stdc++.h>
using namespace std;

bool canBeIncreasing(vector<int>& nums) {
    int removed = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= nums[i-1]) {
            removed++;
            if (removed > 1) return false;

            if (i > 1 && nums[i] <= nums[i-2])
                nums[i] = nums[i-1];
        }
    }

    return true;
}

int main() {
    vector<int> nums = {1, 3, 2, 4};
    cout << (canBeIncreasing(nums) ? "true" : "false");
    return 0;
}
