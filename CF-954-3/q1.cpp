#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;

using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> grid;
        vector<ll> a;
        for(ll i=0;i<n;i++){
            a.clear();
            for(ll j=0;j<m;j++){
                ll temp;
                cin>>temp;
                a.push_back(temp);
            }
            grid.push_back(a);
        }

        ll max_4=INT_MIN;
 
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){

                max_4=INT_MIN;
                
                if(i-1>=0){
                    max_4=max(max_4,grid[i-1][j]);
                }
                if(i+1<=n-1){
                    max_4=max(max_4,grid[i+1][j]);
                }
                if(j-1>=0){
                    max_4=max(max_4,grid[i][j-1]);
                }
                if(j+1<=m-1){
                    max_4=max(max_4,grid[i][j+1]);
                }

                if(max_4<grid[i][j]){
                    grid[i][j]=max_4;
                }
            }
            
        }

        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}