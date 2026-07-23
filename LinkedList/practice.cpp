class Solution {
public:
    vector<vector<vector<int>>> dp;

    bool solve(int i, int j, int used, string &s, string &t) {
        if (i == s.size()) return true;
        if (j == t.size()) return false;

        if (dp[i][j][used] != -1)
            return dp[i][j][used];

        bool ans = false;

        // Match normally
        if (s[i] == t[j])
            ans |= solve(i + 1, j + 1, used, s, t);

        // Use the one replacement
        if (!used)
            ans |= solve(i + 1, j + 1, 1, s, t);

        // Skip current character of t
        ans |= solve(i, j + 1, used, s, t);

        return dp[i][j][used] = ans;
    }

    bool isPossible(string s, string t) {
        int n = s.size(), m = t.size();
        dp.assign(n + 1, vector<vector<int>>(m + 1, vector<int>(2, -1)));
        return solve(0, 0, 0, s, t);
    }
};