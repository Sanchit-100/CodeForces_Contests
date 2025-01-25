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

    ll ans=0;
    for(int i=0;i<n;i++){
        if(m%arr[i]==0) ans+=1;
    }

    cout<<ans<<endl;
    
    return 0;
}