#include<iostream>
#include<vector>
#include<math.h>

using namespace std;


class DisjointSet{
    vector<int> rank,parent;

public:
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
int main(){

    DisjointSet ds(7);
    ds.union_rank(1,2);
    ds.union_rank(2,3);
    ds.union_rank(4,5);
    ds.union_rank(6,7);
    ds.union_rank(5,6);
    
    if(ds.findPar(3)==ds.findPar(7)) cout<<"Same"<<endl;
    else cout<<"Not Same"<<endl;

    ds.union_rank(3,7);

    if(ds.findPar(3)==ds.findPar(7)) cout<<"Same"<<endl;
    else cout<<"Not Same"<<endl;


    return 0;
}