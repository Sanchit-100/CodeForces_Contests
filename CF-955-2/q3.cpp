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
        ll n,l,r;
        cin>>n>>l>>r;

        vector<ll> v(n,0);
        for(auto &it:v) cin>>it;
        vector<ll> suffix(n+1,0);
        suffix[0]=0;
        suffix[1]=v[0];
        for(ll i=1;i<n;i++){
            suffix[i+1]=suffix[i]+v[i];
        }

        ll i=0;
        ll j=1;
        ll ans=0;
        ll diff=0;
        while(i<n+1 && j<n+1){
            diff=suffix[j]-suffix[i];
            if(diff>=l && diff<=r){
                ans+=1;
                i=j;
                j++;
            }
            else if(diff<=r){
                j++;
            }
            else{
                i++;
            }
        }

        cout<<ans<<endl;

        

    }
    return 0;
}