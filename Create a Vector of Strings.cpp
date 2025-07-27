#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> vec = {"apple", "banana", "cherry"};
    for (const auto& str : vec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0;
}
