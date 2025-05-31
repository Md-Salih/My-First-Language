#include <iostream>
#include <queue>
#include <unordered_map>

void findFirstNonRepeatingCharacter(const std::string& str) {
    std::queue<char> queue;
    std::unordered_map<char, int> frequency;
    for (char c : str) {
        queue.push(c);
        frequency[c]++;
        while (!queue.empty() && frequency[queue.front()] > 1) {
            queue.pop();
        }
        if (queue.empty()) {
            std::cout << "-1 ";
        } else {
            std::cout << queue.front() << " ";
        }
    }
}

int main() {
    std::string str = "aabbc";
    findFirstNonRepeatingCharacter(str);
    return 0;
}
