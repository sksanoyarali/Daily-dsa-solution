class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
       int n = grid[0].size();
        vector<long> prefix1(grid[0].begin(), grid[0].end());
        vector<long> prefix2(grid[1].begin(), grid[1].end());

        for (int i = 1; i < n; i++) {
            prefix1[i] += prefix1[i - 1];
            prefix2[i] += prefix2[i - 1];
        }

        long long res = 1e11;
        for (int i = 0; i < n; i++) {
            long long top = prefix1[n - 1] - prefix1[i];
            long long bottom = 0;
            if (i > 0) bottom += prefix2[i - 1];
            long long secondrobot = max(top, bottom);
            res = min(res, secondrobot);
        }

        return res;
    }
};