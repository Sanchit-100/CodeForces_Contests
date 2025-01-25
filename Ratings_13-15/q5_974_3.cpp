#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>
#include<queue>

#define int ll

using namespace std;
using ll=long long;


// void dijkstra(vector<vector<int>> graph, int src) {
//     vector<int> dist(graph.size(),INT_MAX);
//     vector<bool> vis(graph.size(), false);
//     int V=graph.size();

//     dist[src] = 0;

//     for (int count = 0; count < V - 1; count++) {
        
//         int min = INT_MAX;
//         int min_index;

//         for (int v = 0; v < V; v++){
//             if (vis[v] == false && dist[v] <= min){
//                 min = dist[v];
//                 min_index = v;
//             } 
//         }

//         int u = min_index;
//         vis[u] = true;
//         for (int v = 0; v < V; v++){
//             if (!vis[v]){
//                 if(graph[u][v]!=-1){
//                     if(dist[u] != INT_MAX){
//                         if(dist[u] + graph[u][v] < dist[v]){
//                             dist[v] = dist[u] + graph[u][v];
//                         }
//                     }
//                 }
//             } 
//         }
//     }
// }


// Prints shortest paths from src to all other vertices
vector<int> dijkstra(int V, vector<vector<vector<int>>> adj, int S){

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(V, INT_MAX);

    dist[S] = 0;
    pq.push({0, S});

    while (!pq.empty())
    {
        int node = pq.top().second;
        int dis = pq.top().first;
        pq.pop();

        for (auto it : adj[node])
        {
            int v = it[0];
            int w = it[1];
            if (dis + w < dist[v])
            {
                dist[v] = dis + w;
                pq.push({dis + w, v});
            }
        }
    }
    
    return dist;
}



void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int> horse_vertex(h,0);
        for(auto &it: horse_vertex) cin>>it;

        vector<int> temp;
        vector<vector<vector<int>>> adj(n, vector<vector<int>> (vector<int> ));

        int a,b,c;
        for(int i=0;i<m;i++){
            cin>>a;
            cin>>b;
            cin>>c;

            adj[a].push_back({b,c});
        }

        
    }
    
    
}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}