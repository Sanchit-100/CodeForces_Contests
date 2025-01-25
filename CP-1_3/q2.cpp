#include<iostream>
#include<vector>
#include<queue>
using namespace std;
using ll=long long;
ll mod=1e9+7;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;

        vector<ll>* adj=new vector<ll>[n+1];
        ll temp,temp2;
        for(ll i=0;i<m;i++){
            cin>>temp>>temp2;
            adj[temp].push_back(temp2);
            adj[temp2].push_back(temp);
        }

        

        queue<ll> q;
        vector<ll> vis(n+1,0);
        ll groups=0;
        ll comb=1;
        ll cnt=0;
        
        for(ll i=1;i<n+1;i++){
            cnt=1;
            if(!vis[i]){
                cnt=1;
                vis[i]=1;
                groups=(groups+1)%mod;
                q.push(i);
            }
            while(!q.empty()){
                
                temp=q.front();
                q.pop();
                for(ll j=0;j<adj[temp].size();j++){
                    if(!vis[adj[temp][j]]){
                        q.push(adj[temp][j]);
                        cnt+=1;  
                        vis[adj[temp][j]]=1;
                    }
                    
                }
            }
            comb=(comb*cnt)%mod;

        }

        cout<<groups<<" "<<comb<<endl;
        
        

    }
    

    return 0;
}