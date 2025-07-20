#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    if (vec.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector is not empty" << std::endl;
    }
    return 0;
}
