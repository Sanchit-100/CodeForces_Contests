#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<unordered_map>

using namespace std;
using ll=long long;

ll min2(ll a, ll b){
    if(a>b) return b;
    return a;
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;

        ll max_i=b-a;
        ll modified=0;
        ll ans=0;
        if(max_i>=0){
            modified=max_i+1;
        }

        if(modified>n){
            ans=(float(n)/2)*((2*b)+1-n);
        }
        else{
            ans=(float(modified)/2)*((2*b)+1-modified);
            ans+=(n-modified)*a;
        }

        cout<<ans<<endl;
    }

    return 0;
}