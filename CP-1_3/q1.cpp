#include<iostream>
#include<vector>
#include<queue>
using namespace std;
using ll=long long;

void dfs(vector<ll>* adj, ll curr_node, vector<ll> &ans, vector<ll> &vis){
    vis[curr_node]=1;
    ans.push_back(curr_node);
    for(ll i=0;i<adj[curr_node].size();i++){
        if(!vis[adj[curr_node][i]]){
            dfs(adj,adj[curr_node][i],ans,vis);
        }
    }
}

vector<ll> bfsOfGraph(ll V, vector<ll> adj[]) {
    queue<ll> q;
    vector<ll> ans;
    vector<ll> vis(V,0);
    vis[0]=1;
    q.push(0);
    ll temp=0;
    
    while(!q.empty()){
        ans.push_back(q.front());
        temp=q.front();
        q.pop();
        for(ll i=0;i<adj[temp].size();i++){
            if(!vis[adj[temp][i]]){
                q.push(adj[temp][i]);  
                vis[adj[temp][i]]=1;
            }
            
        }
    }
    
    return ans;
}

int main(){

    ll n,m;
    cin>>n>>m;
    ll u,v;
    for(ll i=0;i<m;i++){
        cin>>u>>v;
    }
    cout<<2*m<<endl;

    return 0;
}