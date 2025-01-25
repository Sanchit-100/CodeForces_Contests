#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<unordered_map>

using namespace std;
using ll=long long;


int mod(int a, int m)
{
    return (a % m + m) % m;
}

int main(){
    ll t;
    cin>>t;
    ll m=1e9+7;

    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> arr;

        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            arr.push_back(temp);
        }

        ll max=0;
        ll sum=0;
        pair<ll,ll> ind={0,-1};
        pair<ll,ll> final={0,0};
        for(ll i=0;i<n;i++){
            sum+=arr[i];
            ind.second=i;
            if(sum<0){
                sum=0;
                ind={i+1,i+1};
            }
            if(sum>max){
                max=sum;
                final={ind.first,ind.second};
            }
        }

        // cout<<final.first<<" "<<final.second<<endl;
        // cout<<max<<endl;

        max=mod(max,m);
        ll ans=0;

        for(ll i=0;i<n;i++){
            ans+=arr[i];
        }
        ans=mod(ans,m);

        // for(ll i=final.second+1;i<n;i++){
        //     ans+=arr[i];
        // }
        
        // ll temp=mod(max*(mod(pow(2,k),m)-1),m);

        ll temp=1;
        for(int i=0;i<k;i++){
            temp=(temp*2)%m;
        }
        // ans+=temp;
        // cout<<ans<<endl;
        // cout<<ans<<" "<<temp<<endl;
        ans=ans+(temp*max)-max;
        ans=mod(ans,m);

        cout<<ans<<endl;
    }



    return 0;
}