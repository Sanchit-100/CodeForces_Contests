#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;
    vector<ll> arr;
    unordered_map<int,int> ct;

    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr.push_back(temp);
    }

    for(auto it:arr){
        ct[it]++;
    }

    string ans="NO";    
    for(auto it=ct.begin();it!=ct.end();it++){
        if(it->second>1){
            ans="YES";
            break;
        } 
    }

    cout<<ans<<endl;

    return 0;
}