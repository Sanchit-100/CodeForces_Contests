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
        ll n,k;
        cin>>n>>k;
        vector<ll> arr(n,-1);
        for(auto &it:arr) cin>>it;

        int maximum=INT_MIN;
        int maximum2=INT_MIN;
        for(auto it:arr) maximum=it>maximum?it:maximum;
        for(auto it:arr) maximum2=((it!=maximum & it>maximum2)? it:maximum2);
        
        if(maximum+maximum2>=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
}