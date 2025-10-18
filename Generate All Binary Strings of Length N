#include <iostream>
#include <string>
using namespace std;

void generate(string s, int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0', n);
    generate(s+'1', n);
}

int main(){
    int n; cout<<"Enter length: "; cin>>n;
    cout<<"All binary strings:\n";
    generate("",n);
}
