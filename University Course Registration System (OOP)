#include <iostream>
#include <vector>
using namespace std;

class Course {
protected:
    string name;
    int credits;
public:
    Course(string n, int c) : name(n), credits(c) {}
    virtual void display() {
        cout << "Course: " << name << " | Credits: " << credits << endl;
    }
};

class LabCourse : public Course {
    string labName;
public:
    LabCourse(string n, int c, string l) : Course(n,c), labName(l) {}
    void display() override {
        cout << "Lab Course: " << name << " | Credits: " << credits 
             << " | Lab: " << labName << endl;
    }
};

int main() {
    vector<Course*> courses;
    courses.push_back(new Course("Mathematics", 4));
    courses.push_back(new LabCourse("Operating Systems", 3, "Lab A"));

    for (auto c : courses) c->display();
}
