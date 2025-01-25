#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
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
        for(auto &it:arr) cin>>it;
        ll ans=arr[0];
        double temp=0;
        for(ll i=1;i<n;i++){
            temp=(ans+1)/double(arr[i]);
            ans=ceil(temp)*arr[i];
        }

        cout<<ans<<endl;
    }

    

    return 0;
}