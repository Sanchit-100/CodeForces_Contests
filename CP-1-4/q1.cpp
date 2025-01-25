#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
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

        if(pu<pv) parent[v]=pu;
        else if(pu>=pv) parent[u]=pv;
    }
};


void solve()
{
    
    
    string a,b,c;
    cin>>a>>b>>c;
    
    DisjointSet ds(27);
    for(int i=0;i<a.length();i++){
        ds.union_rank(a[i]-96,b[i]-96);
    }

    string ans="";
    for(auto it:c){
        ans+=ds.findPar(it-96)+96;
    }

    cout<<ans<<endl;
    
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}