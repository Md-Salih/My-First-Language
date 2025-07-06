#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedian(vector<int>& nums1, vector<int>& nums2) {
    vector<int> merged;
    merged.insert(merged.end(), nums1.begin(), nums1.end());
    merged.insert(merged.end(), nums2.begin(), nums2.end());
    sort(merged.begin(), merged.end());
    int n = merged.size();
    if (n % 2 == 0)
        return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    else
        return merged[n / 2];
}

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "Median: " << findMedian(nums1, nums2);
    return 0;
}
