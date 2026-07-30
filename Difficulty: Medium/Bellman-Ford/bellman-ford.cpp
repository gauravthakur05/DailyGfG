class Solution {
public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {

        vector<int> dist(V, 1e8);
        dist[src] = 0;

        for (int j = 0; j < V - 1; j++) {
            for (int i = 0; i < edges.size(); i++) {
                int s = edges[i][0];
                int e = edges[i][1];
                int w = edges[i][2];

                if (dist[s] == 1e8) continue;

                if (dist[s] + w < dist[e]) {
                    dist[e] = dist[s] + w;
                }
            }
        }

        for (int i = 0; i < edges.size(); i++) {
            int s = edges[i][0];
            int e = edges[i][1];
            int w = edges[i][2];

            if (dist[s] != 1e8 && dist[s] + w < dist[e]) {
                return {-1};
            }
        }

        return dist;
    }
};