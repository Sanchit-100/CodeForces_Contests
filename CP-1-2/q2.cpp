#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

using ll=long long;

int main(){

    ll n,k;
    cin>>n>>k;

    vector<ll> s(n,0);
    for(auto &it:s) cin>>it;

    double mid=0;
    double start=1;
    double end=1e9;
    ll temp=0;
    double help=1e-6;
    while(start<=end){
        temp=0;
        mid=(start+end)/2;

        for(ll i=0;i<n;i++){
            temp+=s[i]/mid;
        }
        // cout<<mid<<" "<<temp<<endl;
        if(abs(start-end)<help) break;
        if(temp>=k) start=mid+0.000001;
        else end=mid-0.000001;
    }

    cout<<fixed<<setprecision(6)<<mid<<endl;
    return 0;
}