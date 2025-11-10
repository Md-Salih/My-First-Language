#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

bool isPal(string s){
    string r=s; reverse(r.begin(), r.end());
    return s==r;
}

int main(){
    string line; 
    cout<<"Enter a sentence: ";
    getline(cin,line);

    stringstream ss(line);
    string w; int count=0;
    while(ss>>w) if(isPal(w)) count++;

    cout<<"Number of palindromic words: "<<count;
}
