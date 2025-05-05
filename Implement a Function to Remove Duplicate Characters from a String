#include <iostream>
#include <string>
#include <unordered_set>

std::string removeDuplicates(const std::string& str) {
    std::unordered_set<char> charSet;
    std::string result;

    for (char c : str) {
        if (charSet.find(c) == charSet.end()) {
            charSet.insert(c);
            result += c;
        }
    }

    return result;
}

int main() {
    std::string str = "hello";
    std::cout << "String without duplicates: " << removeDuplicates(str) << std::endl;
    return 0;
}
