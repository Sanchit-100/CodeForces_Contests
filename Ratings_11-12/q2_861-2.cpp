#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
using ll=long long;

int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> grid;
        vector<ll> temp(n,0);
        for(ll i=0;i<m;i++){
            grid.push_back(temp);
        }

        ll a;

        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a;
                grid[j][i]=a;
            }
        }

        for(ll i=0;i<m;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        ll ans=0;

        ll initial=0;
        for(ll i=0;i<m;i++){

            initial=grid[i].size()-1;

            for(ll j=0;j<n;j++){
                ans+=initial*grid[i][j];
                initial-=2;
            }
            
        }

        cout<<abs(ans)<<endl;
    }

    return 0;

}