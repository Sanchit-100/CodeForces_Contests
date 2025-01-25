#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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

        unordered_map<ll,ll> ct;
        for(auto it:arr) ct[it]++;

        for(ll i=0;i<n;i++){
            if(ct[arr[i]]>1){
                ct[arr[i]]--;
                arr[i]=-1;
            }
            
        }

        sort(arr.begin(),arr.end());


        vector<ll> new_arr;
        for(ll i=0;i<n;i++){
            if(arr[i]!=-1) new_arr.push_back(arr[i]);
        }

        // for(ll i =0;i<new_arr.size();i++) cout<<new_arr[i]<<" ";
        ll start=0;
        ll end=0;
        ll ans=1;
        ll curr_ct=0;

        for (int i = 0; i < new_arr.size(); i++) {
            while(new_arr[i] - new_arr[start] >= n) {
                start++;
            }
            ans = max(ans, i - start + 1);
        }


        cout<<ans<<endl;
    }

    

    return 0;
}