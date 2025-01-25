#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;
using ll=long long;

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    ll x,y,z;
    cin>>x>>y>>z; 
    
    cout<<gcd(gcd(x,y),z)<<endl;

    return 0;
}