#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using ll=long long;
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n,-1);
        vector<ll> copy(n,-1);

        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            arr[i]=temp;
            copy[i]=temp;
            
        } 
        sort(copy.begin(),copy.end());
        ll med=copy[(n-1)/2];

        ll alt=-1;
        for(ll i=1;i<n-1;i++){
            if(arr[i+1]>arr[i] || arr[i-1]>arr[i]){
                if(alt<arr[i]) alt=arr[i];
            }
        }

        if(arr[1]>arr[0] && arr[0]>alt) alt=arr[0];
        if(arr[n-1]<arr[n-2] && arr[n-1]>alt) alt=arr[n-1];

        if(alt>med) med=alt;
        cout<<med<<endl;

    }



    return 0;
}