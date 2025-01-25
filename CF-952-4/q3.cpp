#include<iostream>
#include<string>
#include<vector>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> arr;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            
            arr.push_back(temp);
        }

        ll max=arr[0];
        ll ct=0;
        ll ans=0;

        for(ll i=1;i<n;i++){
            if(max<arr[i]){
                ll temp2=max;
                max=arr[i];
                ct+=temp2;
            }
            else{
                ct+=arr[i];
            }

            if(max==ct) ans+=1;
        }

        if(arr[0]==0) ans+=1;

        cout<<ans<<endl;


    }


    return 0;
}