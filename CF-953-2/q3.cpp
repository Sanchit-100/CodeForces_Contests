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

void helper(vector<ll>& ans, ll k, ll n, ll start, ll end){
    if(k>n-1){
        swap(ans[start],ans[end]);
        // cout<<"B1"<<endl;
        // cout<<"Swapped "<<ans[start]<<" "<<ans[end]<<endl;
        helper(ans,k-(n-1),n-2,start+1,end-1);
    }
    else{
        // cout<<"hi"<<endl;
        // cout<<ans[start]<<" "<<ans[start+k]<<endl;
        swap(ans[start],ans[start+k]);
        // cout<<k<<endl;
        // cout<<"B2"<<endl;
        // cout<<"Swapped "<<ans[start]<<" "<<ans[start+k]<<endl;
        return;
    }
    

}

int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        vector<ll> ans;
        for(ll i=1;i<n+1;i++){
            ans.push_back(i);
        }

        ll max=0;
        for(ll i=0;i<n;i++){
            max+=abs(ans[i]-(n-i));
        }

        // cout<<max<<endl;

        if(k%2!=0 || k>max){
            cout<<"NO"<<endl;
        }
        else{
            helper(ans,k/2,n,0,n-1);
            cout<<"YES"<<endl;
            for(ll j=0;j<n;j++){
                cout<<ans[j]<<" ";
            }
            cout<<endl;
        }


    }


    return 0;
}