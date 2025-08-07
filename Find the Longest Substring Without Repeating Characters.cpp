#include <iostream>
#include <string>
#include <unordered_map>

int longestSubstringWithoutRepeatingChars(const std::string& str) {
    std::unordered_map<char, int> charIndexMap;
    int maxLength = 0;
    int windowStart = 0;

    for (int windowEnd = 0; windowEnd < str.length(); windowEnd++) {
        char rightChar = str[windowEnd];
        if (charIndexMap.find(rightChar) != charIndexMap.end()) {
            windowStart = std::max(windowStart, charIndexMap[rightChar] + 1);
        }
        charIndexMap[rightChar] = windowEnd;
        maxLength = std::max(maxLength, windowEnd - windowStart + 1);
    }

    return maxLength;
}

int main() {
    std::string str = "abcabcbb";
    std::cout << "Length of the longest substring without repeating characters: " << longestSubstringWithoutRepeatingChars(str) << std::endl;
    return 0;
}
