#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<unordered_map>

using namespace std;
using ll=long long;

ll max2(ll a, ll b){
    if(a>b) return a;
    return b;
}


int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n,c;
        cin>>n>>c;

        vector<ll> fans;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            fans.push_back(temp);
        }

        fans[0]=fans[0]+c;

        vector<ll> ans(n,-1);
        ll max=-1;
        ll max_i=-1;
        for(ll i=0;i<n;i++){
            if(fans[i]>max){
                max=fans[i];
                max_i=i;
            }
        }

        vector<ll> suffix(n,-1);

        ll temp=0;
        for(ll i=0;i<n;i++){
            temp+=fans[i];
            suffix[i]=temp;
        }
        
        for(ll i=0;i<n;i++){
            if(i==max_i){
                ans[i]=0;
            }
            else if(suffix[i]>=max){
                ans[i]=i;
            }
            else{
                ans[i]=i+1;
            }
        }

        for(auto it: ans) cout<<it<<" ";
        cout<<endl;

    }


    return 0;
}