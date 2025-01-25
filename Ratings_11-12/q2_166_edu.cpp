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
        ll n;
        cin>>n;
        vector<ll> a;
        vector<ll> b;

        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            a.push_back(temp);
        }

        
        for(ll i=0;i<n+1;i++){
            ll temp;
            cin>>temp;
            b.push_back(temp);
        }

        ll ans=0;
        for(ll i=0;i<n;i++){
            ans+=abs(a[i]-b[i]);
        }
        
        ll flag=0;
        ll target=b[n];
        ll adder=INT_MAX;
        for(ll i=0;i<n;i++){
            if(target<=b[i] && target>=a[i]){
                adder=1;
                flag=1;
                break;
            }

            else if(target>=b[i] && target<=a[i]){
                adder=1;
                flag=1;
                break;
            }
        }

        if(flag==0){
            for(ll j=0;j<n;j++){
                adder=min2(adder,abs(target-a[j]));
                adder=min2(adder,abs(target-b[j]));
            }

            adder+=1;
        }



        ans+=adder;
        cout<<ans<<endl;
    }

    return 0;
}