#include<iostream>
#include<vector>
#include<queue>
using namespace std;
using ll=long long;
ll mod=1e9+7;

ll cnt=0;
void dfs(vector<ll>* adj, ll curr_node, vector<ll> &vis,vector<ll>& cnt){
    vis[curr_node]=1;
    cnt[0]+=1;
    for(ll i=0;i<adj[curr_node].size();i++){
        if(!vis[adj[curr_node][i]]){
            dfs(adj,adj[curr_node][i],vis,cnt);
        }
    }

}



int main(){
    
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        if(n<3) cout<<0<<endl;
        else cout<<n-2<<endl;

    }
    return 0;
}