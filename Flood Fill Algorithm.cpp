#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& img,int x,int y,int color,int old){
    if(x<0 || y<0 || x>=img.size() || y>=img[0].size()) return;
    if(img[x][y]!=old) return;
    img[x][y]=color;

    dfs(img,x+1,y,color,old);
    dfs(img,x-1,y,color,old);
    dfs(img,x,y+1,color,old);
    dfs(img,x,y-1,color,old);
}

int main(){
    int n,m;
    cout<<"Enter size of image (n m): ";
    cin>>n>>m;
    vector<vector<int>> img(n,vector<int>(m));
    cout<<"Enter image pixels:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>img[i][j];

    int x,y,color;
    cout<<"Enter start point and new color: ";
    cin>>x>>y>>color;

    int old=img[x][y];
    dfs(img,x,y,color,old);

    cout<<"\nUpdated Image:\n";
    for(auto &row:img){
        for(int val:row) cout<<val<<" ";
        cout<<endl;
    }
}
