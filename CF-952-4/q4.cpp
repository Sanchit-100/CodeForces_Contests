#include<iostream>
#include<string>
#include<vector>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> grid;
        vector<ll> temp2;

        for(ll i=0;i<n;i++){
            string temp;
            cin>>temp;
            temp2.clear();
            for(ll j=0;j<m;j++){
                if(temp[j]=='.'){
                    temp2.push_back(0);
                }
                else{
                    temp2.push_back(1);
                }
            }
            grid.push_back(temp2);
        }

        // for(ll i=0;i<n;i++){
        //     for(ll j=0;j<m;j++){
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        

        ll left=0;
        ll right=0;
        ll up=0;
        ll down=0;

        
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(grid[i][j]==1){
                    up=i+1;
                    break;            
                }
            }
        }

        for(ll i=n-1;i>=0;i--){
            for(ll j=0;j<m;j++){
                if(grid[i][j]==1){
                    down=i+1;
                    break;            
                }
            }
        }

// ---------------------------------------------------
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                if(grid[j][i]==1){
                    left=i+1;
                    break;            
                }
            }
        }

        for(ll i=m-1;i>=0;i--){
            for(ll j=0;j<n;j++){
                if(grid[j][i]==1){
                    right=i+1;
                    break;            
                }
            }
        }

        // cout<<up<<" "<<down<<" "<<left<<" "<<right<<endl;
        cout<<(up+down)/2<<" "<<(left+right)/2<<endl;

    }


    return 0;
}