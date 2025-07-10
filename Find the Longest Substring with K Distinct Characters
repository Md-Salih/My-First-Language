#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestSubstringWithKDistinct(string str, int k) {
    if (str.empty() || k == 0)
        return 0;

    unordered_map<char, int> charCount;
    int maxLength = 0;
    int windowStart = 0;

    for (int windowEnd = 0; windowEnd < str.length(); windowEnd++) {
        char rightChar = str[windowEnd];
        charCount[rightChar]++;

        while (charCount.size() > k) {
            char leftChar = str[windowStart];
            charCount[leftChar]--;
            if (charCount[leftChar] == 0)
                charCount.erase(leftChar);
            windowStart++;
        }

        maxLength = max(maxLength, windowEnd - windowStart + 1);
    }

    return maxLength;
}

int main() {
    string str = "araaci";
    int k = 2;
    cout << "Length of the longest substring with " << k << " distinct characters: " << longestSubstringWithKDistinct(str, k) << endl;
    return 0;
}
