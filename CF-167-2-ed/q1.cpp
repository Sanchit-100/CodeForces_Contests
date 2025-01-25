#include<iostream>
#include<string>
#include<vector>

using namespace std;
using ll=long long;

int main(){
    
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(b<-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}