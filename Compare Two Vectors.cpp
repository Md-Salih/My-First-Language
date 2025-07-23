#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};
    if (vec1 == vec2) {
        std::cout << "Vectors are equal" << std::endl;
    } else {
        std::cout << "Vectors are not equal" << std::endl;
    }
    return 0;
}
