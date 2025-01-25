#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<unordered_map>

using namespace std;
using ll=long long;



int main(){

    ll t;
    cin>>t;

    vector<ll> dp(30,0);
    ll op1,op2,op3,op4,op5;

    for(ll i=1;i<=29;i++){
        op1=1e9;
        op2=1e9;
        op3=1e9;
        op4=1e9;
        op5=1e9;

        if(i>=15){
            op1=dp[i-15];
        }

        if(i>=10){
            op2=dp[i-10];
        }
        
        if(i>=6){
            op3=dp[i-6];
        }
        
        if(i>=3){
            op4=dp[i-3];
        }
        
        if(i>=1){
            op5=dp[i-1];
        }
        
        dp[i]=min(min(min(min(op1,op2),op3),op4),op5)+1;

    }
    while(t--){
        ll n;
        cin>>n;

        ll ans=0;
        ll temp=0;
        if(n<30){
            cout<<dp[n]<<endl;
        }
        else{
            ans=n/15;
            ans=ans-1;
            cout<<ans+dp[n-(ans*15)]<<endl;
        }
        

        // for(int i=0;i<30;i++){
        //     cout<<dp[i]<<" ";
        // }
    }

    return 0;
}