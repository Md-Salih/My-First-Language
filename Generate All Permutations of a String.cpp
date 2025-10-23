#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void permute(string s){
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"All permutations:\n";
    permute(s);
}
