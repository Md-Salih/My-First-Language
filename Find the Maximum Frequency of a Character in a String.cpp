#include <iostream>
#include <string>
#include <unordered_map>

int maxFrequency(const std::string& str) {
    std::unordered_map<char, int> frequency;
    int maxFreq = 0;

    for (char c : str) {
        frequency[c]++;
        maxFreq = std::max(maxFreq, frequency[c]);
    }

    return maxFreq;
}

int main() {
    std::string str = "hello";
    std::cout << "Maximum frequency: " << maxFrequency(str) << std::endl;
    return 0;
}

