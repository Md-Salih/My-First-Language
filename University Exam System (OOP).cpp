#include <iostream>
#include <vector>
using namespace std;

class Exam {
protected:
    string subject;
    int marks;
public:
    Exam(string s, int m) : subject(s), marks(m) {}
    virtual void display() {
        cout << "Subject: " << subject << " | Marks: " << marks << endl;
    }
};

class PracticalExam : public Exam {
    string labName;
public:
    PracticalExam(string s, int m, string l) : Exam(s,m), labName(l) {}
    void display() override {
        cout << "Practical - " << subject << " | Marks: " << marks 
             << " | Lab: " << labName << endl;
    }
};

int main() {
    vector<Exam*> exams;
    exams.push_back(new Exam("Maths", 90));
    exams.push_back(new PracticalExam("OS Lab", 85, "Lab A"));

    for (auto e : exams) e->display();
}
