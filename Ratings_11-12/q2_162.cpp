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
        ll n,k;
        cin>>n>>k;

        vector<ll> health(n,-1);
        vector<ll> distance(n,-1);
        for(ll i=0;i<n;i++) cin>>health[i];
        for(ll i=0;i<n;i++) cin>>distance[i];

        vector<ll> main(n+1,0);
        for(ll i=0;i<n;i++) main[abs(distance[i])]+=health[i];
        bool ans=true;
        ll left=0;

        for(ll i=1;i<=n;i++){
            left+=k-main[i];
            ans=ans&(left>=0);
        }
        cout<<(ans?"YES":"NO")<<endl;

    }

}