#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<map>
#include<cmath>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> height(n,0);
        for(auto &it:height) cin>>it;

        ll max2=0;
        for(int i=0;i<n;i++){
            max2=max(max2,height[i]+i);
        }

        cout<<max2<<endl;
    }


    return 0;
}