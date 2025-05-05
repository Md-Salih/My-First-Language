#include <iostream>
#include <string>

std::string longestSubstringWithoutConsecutiveRepeatingChars(const std::string& str) {
    std::string longestSubstring;
    std::string currentSubstring;

    for (char c : str) {
        if (currentSubstring.empty() || c != currentSubstring.back()) {
            currentSubstring += c;
            if (currentSubstring.length() > longestSubstring.length()) {
                longestSubstring = currentSubstring;
            }
        } else {
            currentSubstring = std::string(1, c);
        }
    }

    return longestSubstring;
}

int main() {
    std::string str = "aabbc";
    std::cout << "Longest substring without consecutive repeating characters: " << longestSubstringWithoutConsecutiveRepeatingChars(str) << std::endl;
    return 0;
}
