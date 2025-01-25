#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
#include<string>
#include<unordered_map>
using namespace std;

using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<ll> ind(m,-1);
        for(auto &it:ind) cin>>it;

        string c;
        cin>>c;

        unordered_map<char,ll> mp;
        for(char i:c) mp[i]++;
        sort(ind.begin(),ind.end());
        auto ip=unique(ind.begin(),ind.end());
        ind.resize(distance(ind.begin(),ip));

        // for(auto it:ind) cout<<it<<" ";
        // cout<<endl;
        
        string ans="";
        ll curr=0;
        for(ll i=0;i<n;i++){
            if(ind[curr]==i+1){
                for(char j='a';j<='z';j++){
                    if(mp[j]>0){
                        ans+=j;
                        mp[j]--;
                        break;
                    }
                }
                curr++;   
            }
            else{
                ans+=s[i];
            }
            
        }

        cout<<ans<<endl;
    }

    return 0;
}