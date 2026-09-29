class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int length = m + n - 1;

        if (length % 2 != 0 || grid[0][0] != '(' ||
            grid[m - 1][n - 1] != ')') {
            return false;
        }

        // -1: unknown, 0: false, 1: true
        vector<vector<vector<int8_t>>> memo(
            m, vector<vector<int8_t>>(
                   n, vector<int8_t>(length + 1, -1)));

        function<bool(int, int, int)> dfs = [&](int row, int col,
                                                  int balance) -> bool {
            balance += (grid[row][col] == '(' ? 1 : -1);
            int remaining = (m - 1 - row) + (n - 1 - col);

            if (balance < 0 || balance > remaining) return false;
            if (row == m - 1 && col == n - 1) return balance == 0;

            int8_t& cached = memo[row][col][balance];
            if (cached != -1) return cached == 1;

            bool possible =
                (row + 1 < m && dfs(row + 1, col, balance)) ||
                (col + 1 < n && dfs(row, col + 1, balance));

            cached = possible ? 1 : 0;
            return possible;
        };

        return dfs(0, 0, 0);
    }
};
