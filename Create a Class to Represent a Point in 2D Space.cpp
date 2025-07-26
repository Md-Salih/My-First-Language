#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double calculateDistance(Point otherPoint) {
        return sqrt(pow(x - otherPoint.x, 2) + pow(y - otherPoint.y, 2));
    }
};

int main() {
    Point point1(1.0, 2.0);
    Point point2(4.0, 6.0);
    std::cout << "Distance: " << point1.calculateDistance(point2) << std::endl;
    return 0;
}
