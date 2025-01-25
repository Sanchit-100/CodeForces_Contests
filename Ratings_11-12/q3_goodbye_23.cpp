#include<iostream>
#include<vector>
#include<climits>
#include<string>
using ll=long long;
using namespace std;
int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        vector<ll> arr(n,-1);
        for(auto &it: arr) cin>>it;

        ll odd=0;
        ll sum=0;
        ll q=0;
        for(ll i=0;i<n;i++){
            sum+=arr[i];
            if(arr[i]%2!=0) odd++;
            q=odd/3;
            if(i==0) cout<<arr[i]<<" ";
            else cout<<sum-q-(odd%3==1?1:0)<<" ";
        }

        cout<<endl;   
    }

    return 0;
}