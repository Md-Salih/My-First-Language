#include <bits/stdc++.h>
using namespace std;

vector<int> buildLPS(string p){
    int n = p.size();
    vector<int> lps(n,0);
    int len = 0;

    for(int i=1;i<n;i++){
        while(len>0 && p[i]!=p[len])
            len = lps[len-1];

        if(p[i]==p[len])
            len++;

        lps[i] = len;
    }
    return lps;
}

int main(){
    string text = "ababababa";
    string pat = "aba";

    vector<int> lps = buildLPS(pat);
    int i=0,j=0, cnt=0;

    while(i < text.size()){
        if(text[i]==pat[j]){
            i++; j++;
            if(j==pat.size()){
                cnt++;
                j = lps[j-1];
            }
        }
        else{
            if(j!=0) j = lps[j-1];
            else i++;
        }
    }

    cout << cnt;
}
