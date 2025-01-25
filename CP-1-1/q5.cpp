#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;
using ll=long long;

int main(){
    ll n,m;
    cin>>n>>m;
    
    vector<ll> arr;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr.push_back(temp);
    }

    vector<ll> suffix(n,0);
    suffix[0]=arr[0];
    for(int i=1;i<n;i++){
        suffix[i]=arr[i]+suffix[i-1];
    }

    // for(int i=0;i<n;i++){
    //     cout<<suffix[i]<<" ";
    // }

    while(m--){
        ll l,s;
        cin>>l>>s;

        ll ans=0;

        
        int search=0;
        if(l==1){
            search=s;
        }
        else{
            search=s+suffix[l-2];
        }

        auto it=lower_bound(suffix.begin()+l-1,suffix.end(),search);
        if(it==suffix.end()){
            ans=-1;
        }
        else{
            ll idx=it-suffix.begin();
            ans=idx+1;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}