class Solution {
public:
    int dp[1001][1001];

    int solve(int i, int j, string &s) {
        if (i == 0 || j == 0)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (s[i - 1] == s[j - 1] && i != j)
            return dp[i][j] = 1 + solve(i - 1, j - 1, s);

        return dp[i][j] = max(solve(i - 1, j, s),
                              solve(i, j - 1, s));
    }

    int longestRepSubseq(string &str) {
        memset(dp, -1, sizeof(dp));
        int n = str.size();
        return solve(n, n, str);
    }
};