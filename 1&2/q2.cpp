#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<map>
using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n,0);
        for(auto &it:arr)cin>>it;
        vector<ll> diff;
        ll max=arr[0];
        for(ll i=1;i<n;i++){
            if(arr[i]<max) diff.push_back(max-arr[i]);
            else max=arr[i];
        }

        sort(diff.begin(),diff.end());
        ll prev=0;
        ll ans=0;
        ll a=diff.size();
        for(ll i=0;i<a;i++){
            ans+=(diff[i]-prev)*(a-i+1);
            prev+=(diff[i]-prev);
        }

        // for(auto it: diff) cout<<it<<" ";
        // cout<<endl;

        cout<<ans<<endl;

    }


    return 0;
}