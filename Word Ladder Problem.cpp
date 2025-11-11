#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int ladderLength(string begin, string end, vector<string>& wordList){
    unordered_set<string> dict(wordList.begin(),wordList.end());
    if(!dict.count(end)) return 0;

    queue<pair<string,int>> q;
    q.push({begin,1});

    while(!q.empty()){
        auto [word,steps]=q.front(); q.pop();
        if(word==end) return steps;

        for(int i=0;i<word.size();i++){
            string temp=word;
            for(char c='a';c<='z';c++){
                temp[i]=c;
                if(dict.count(temp)){
                    dict.erase(temp);
                    q.push({temp,steps+1});
                }
            }
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter word list size: ";
    cin>>n;
    vector<string> words(n);
    cout<<"Enter words:\n";
    for(int i=0;i<n;i++) cin>>words[i];
    string start,end;
    cout<<"Enter start and end words: ";
    cin>>start>>end;
    int res=ladderLength(start,end,words);
    if(res==0) cout<<"No transformation possible";
    else cout<<"Shortest transformation length: "<<res;
}
