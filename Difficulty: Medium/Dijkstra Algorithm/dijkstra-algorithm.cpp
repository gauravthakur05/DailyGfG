
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {

      
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> pq;

       
        vector<vector<pair<int,int>>> adj(V);


        for(int i = 0; i < edges.size(); i++) {
            int s = edges[i][0];
            int e = edges[i][1];
            int w = edges[i][2];

            
            adj[s].push_back({e, w});
            adj[e].push_back({s, w});  
        }

      
        vector<int> dist(V, 1e9);

        pq.push({0, src});
        dist[src] = 0;

        while(!pq.empty()) {
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it : adj[node]) {
                int adjNode = it.first;
                int wt = it.second;

                if(d + wt < dist[adjNode]) {
                    dist[adjNode] = d + wt;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }

        return dist;
    }
};