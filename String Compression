#include <iostream>
#include <string>
using namespace std;

string compress(string s){
    string res="";
    int count=1;
    for(int i=1;i<=s.size();i++){
        if(i<s.size() && s[i]==s[i-1]) count++;
        else{
            res+=s[i-1];
            if(count>1) res+=to_string(count);
            count=1;
        }
    }
    return res;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Compressed string: "<<compress(s);
}
