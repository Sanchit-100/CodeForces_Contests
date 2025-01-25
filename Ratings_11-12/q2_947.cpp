#include<iostream>
#include<vector>
#include<climits>
using ll=long long;
using namespace std;
int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> arr(n,-1);
        for(ll i=0;i<n;i++) cin>>arr[i];

        ll a=INT_MAX;
        ll b=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<a) a=arr[i];
        }

        for(int i=0;i<n;i++){
            if(arr[i]<b && a!=arr[i] && arr[i]%a!=0) b=arr[i];
        }

        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]%a!=0 && arr[i]%b!=0){
                flag=false;
                break;
            }
        }
        
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;




    }
}