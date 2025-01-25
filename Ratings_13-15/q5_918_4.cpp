#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<map>
using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        map<ll,int> cnt;
        vector<ll> arr(n,0);
        for(auto &it:arr)cin>>it;

        ll a=0,b=0;
        ll flag=0;
        bool ans=false;
        cnt[0]=1;

        ll temp=0;
        for(ll i=0;i<n;i++){
            if(flag==0){
                a+=arr[i];
                flag=1;
            }
            else{
                b+=arr[i];
                flag=0;
            }

            temp=a-b;

            if(cnt[temp]==1){
                ans=true;
                break;
            }
            else{
                cnt[temp]=1;
            }

        }

        cout<<(ans?"YES":"NO")<<endl;
    }


    return 0;
}