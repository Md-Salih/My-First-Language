class Solution {
public:
    static int minimumCost(vector<int>& cost) {
        int freq[101]={0}, M=0, n=cost.size();
        for(int x: cost) {
            freq[x]++;
            M=max(x, M);
        }
        int sz=0, r=0, sum=0;
        for(int x=M; sz<n; x--){
            int f=freq[x];
            while (f-->0){
                sz++;
                if (sz%3==0) break;
                else sum+=x;
            }
            if (f<=0) continue;
            auto [q, r]=div(f, 3);
            sum+=(2*q+r)*x;
            sz+=f;
        }
        return sum;
    }
};




auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
