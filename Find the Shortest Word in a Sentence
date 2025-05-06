#include <iostream>
#include <string>
#include <sstream>

std::string shortestWord(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::string shortestWord;

    while (iss >> word) {
        if (shortestWord.empty() || word.length() < shortestWord.length()) {
            shortestWord = word;
        }
    }

    return shortestWord;
}

int main() {
    std::string sentence = "This is a sample sentence";
    std::cout << "Shortest word: " << shortestWord(sentence) << std::endl;
    return 0;
}

