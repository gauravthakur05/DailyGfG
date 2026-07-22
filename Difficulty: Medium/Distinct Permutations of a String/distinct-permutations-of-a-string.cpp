class Solution {
public:

    vector<string> ans;
    vector<bool> v;

    void helper(string &s, string psf) {
        if (psf.length() == s.length()) {
            ans.push_back(psf);
            return;
        }

        for (int i = 0; i < s.length(); i++) {
            if (v[i]) continue;

            if (i > 0 && s[i] == s[i - 1] && !v[i - 1])
                continue;

            v[i] = 1;
            helper(s, psf + s[i]);
            v[i] = 0;
        }
    }

    vector<string> findPermutation(string &s) {
        sort(s.begin(), s.end());
        v = vector<bool>(s.size(), 0);
        helper(s, "");
        return ans;
    }
};