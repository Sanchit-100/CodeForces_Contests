#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
using ll=long long;

int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n,-1);
        for(ll i=0;i<n;i++) cin>>arr[i];

        vector<ll> ans(n,-1);
        unordered_map<ll,ll> ct;
        ll last=0;
        ll curr=0;
        for(ll i=0;i<n;i++){
            ll target=last-arr[i];
            if(target<0) target=0;
            while(ct[target]!=0){
                target++;
            }

            ans[i]=target;
            ct[target]++;
            last=target+arr[i];

        }

        for(ll i:ans) cout<<i<<" ";
        cout<<endl;

    }

}