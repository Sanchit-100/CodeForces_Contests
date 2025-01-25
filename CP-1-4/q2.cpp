#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;

class DisjointSet{

public:
    vector<int> rank,parent;
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++) parent[i]=i;
    }

    int findPar(int node){
        if(node==parent[node]) return node;
        return parent[node] = findPar(parent[node]);
    }

    void union_rank(int u, int v){
        int pu=findPar(u);
        int pv=findPar(v);

        // already in the same set
        if(pu==pv) return;

        if(rank[pu]<rank[pv]) parent[pu]=pv;
        else if(rank[pu]>rank[pv]) parent[pv]=pu;
        else{
            parent[pv]=pu;
            rank[pu]++;
        }
    }
};

void solve()
{
    int n;
    cin>>n;

    DisjointSet ds(n);
    int u=0,v=0;
    int extras=0;
    int comp=0;
    vector<pair<int,int>> extra_edge;
    vector<int> u_parents;

    for(int i=1;i<n;i++){
        cin>>u>>v;
        if(ds.findPar(u)==ds.findPar(v)){
            extras++;
            extra_edge.push_back({u,v});
        }
        else ds.union_rank(u,v); 
    }

    for(int i=1;i<=n;i++){
        if(ds.parent[i]==i){
            comp++;
            u_parents.push_back(i);
        }
    }

    cout<<comp-1<<endl;
    for(int i=0;i<comp-1;i++){
        cout<<extra_edge[i].first<<" "<<extra_edge[i].second<<" "<<u_parents[i]<<" "<<u_parents[i+1]<<endl;
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