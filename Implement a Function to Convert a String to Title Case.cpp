#include <iostream>
#include <string>
#include <sstream>

std::string toTitleCase(const std::string& str) {
    std::istringstream iss(str);
    std::string word;
    std::string titleCaseStr;

    while (iss >> word) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
        titleCaseStr += word + " ";
    }

    // Remove the trailing space
    if (!titleCaseStr.empty()) {
        titleCaseStr.pop_back();
    }

    return titleCaseStr;
}

int main() {
    std::string str = "hello world";
    std::cout << "Title case: " << toTitleCase(str) << std::endl;
    return 0;
}
