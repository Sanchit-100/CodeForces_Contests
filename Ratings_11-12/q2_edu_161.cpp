#include<iostream>
#include<vector>
#include<climits>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<map>
using ll=long long;
using namespace std;


int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> arr(n,-1);
        for(auto &it: arr)cin>>it;
        sort(arr.begin(),arr.end());

        map<ll,ll> mp;
        for(auto it: arr) mp[it]++;

        ll prev=0;
        ll ans=0;
        ll temp=0;
        for(auto it:mp){
            temp=it.second;
            if(it.second>=3){
                ans+=(temp*(temp-1)*(temp-2))/6;
            } 

            if(temp>=2){
                ans+=((temp*(temp-1))/2)*prev;
            }
            
            prev+=temp;
        }

        cout<<ans<<endl;    
    }

    return 0;
}