#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Student {
    string name;
    int marks;
public:
    Student(string n,int m):name(n),marks(m){}
    char grade(){
        if(marks>=90) return 'A';
        else if(marks>=75) return 'B';
        else if(marks>=50) return 'C';
        else return 'F';
    }
    void display(){
        cout<<name<<" | Marks: "<<marks<<" | Grade: "<<grade()<<endl;
    }
    string getData(){ return name+" "+to_string(marks)+" "+grade(); }
};

int main(){
    int n;
    cout<<"Enter number of students: "; cin>>n;
    vector<Student> list;
    for(int i=0;i<n;i++){
        string name; int marks;
        cout<<"Enter name and marks: ";
        cin>>name>>marks;
        list.push_back(Student(name,marks));
    }

    ofstream fout("grades.txt");
    cout<<"\n---Student Grades---\n";
    for(auto &s:list){
        s.display();
        fout<<s.getData()<<endl;
    }
    fout.close();
}
