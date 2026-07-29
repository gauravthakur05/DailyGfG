class Solution {
public:
    vector<int> DSU(int n, vector<vector<int>>& queries) {
        vector<int> res;
        vector<int> parent(n + 1);

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }

        for (int i = 0; i < queries.size(); i++) {
            if (queries[i][0] == 2) {
                res.push_back(findUltimateParent(queries[i][1], parent));
            } else {
                unionByRank(queries[i][1], queries[i][2], parent);
            }
        }

        return res;
    }

    int findUltimateParent(int node, vector<int>& parent) {
        if (node == parent[node]) {
            return node;
        }
        return parent[node] = findUltimateParent(parent[node], parent);
    }

    void unionByRank(int u, int v, vector<int>& parent) {
        int upu = findUltimateParent(u, parent);
        int upv = findUltimateParent(v, parent);

        if (upu != upv) {
            parent[upu] = upv;
        }
    }
};