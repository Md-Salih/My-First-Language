#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Patient {
    string name, disease;
    int age;
public:
    Patient(string n, int a, string d):name(n),age(a),disease(d){}
    void display(){
        cout<<name<<" | Age: "<<age<<" | Disease: "<<disease<<endl;
    }
    string getData(){ return name+" "+to_string(age)+" "+disease; }
};

int main(){
    int n;
    cout<<"Enter number of patients: "; cin>>n;
    vector<Patient> records;
    for(int i=0;i<n;i++){
        string name,disease; int age;
        cout<<"Enter name, age, disease: ";
        cin>>name>>age>>disease;
        records.push_back(Patient(name,age,disease));
    }

    ofstream fout("patients.txt");
    cout<<"\n---Patient Records---\n";
    for(auto &p:records){
        p.display();
        fout<<p.getData()<<endl;
    }
    fout.close();
}
