#include <iostream>
#include <vector>
using namespace std;

bool knows(vector<vector<int>>& M, int a, int b){ return M[a][b]==1; }

int findCelebrity(vector<vector<int>>& M, int n){
    int cand=0;
    for(int i=1;i<n;i++)
        if(knows(M,cand,i)) cand=i;

    for(int i=0;i<n;i++){
        if(i!=cand && (knows(M,cand,i) || !knows(M,i,cand))) return -1;
    }
    return cand;
}

int main(){
    int n;
    cout<<"Enter number of people: ";
    cin>>n;
    vector<vector<int>> M(n, vector<int>(n));
    cout<<"Enter matrix (1=knows, 0=doesn't know):\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>M[i][j];
    int celeb=findCelebrity(M,n);
    if(celeb==-1) cout<<"No Celebrity Found";
    else cout<<"Celebrity is person "<<celeb;
}
