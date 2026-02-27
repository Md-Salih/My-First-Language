class Solution {
public:
    int minOperations(string s, int k) {
        int n = s.size();
        int z = count(s.begin(), s.end(), '0');

        if (z == 0) return 0;

        // parity impossible case
        if (k % 2 == 0 && z % 2 == 1) return -1;

        int t = (z + k - 1) / k;  // ceil(z / k)

        // fix parity
        if ((t * k - z) % 2) t++;

        return t;
    }
};
