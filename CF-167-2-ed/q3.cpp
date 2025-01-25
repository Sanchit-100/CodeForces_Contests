#include<iostream>
#include<string>
#include<vector>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> m1(n,0);
        vector<ll> m2(n,0);
        for(auto &it: m1) cin>>it;
        for(auto &it: m2) cin>>it;

        ll movie1=0,movie2=0;
        
        for(ll i=0;i<n;i++){
            if(m1[i]!=m2[i]){
                if(m1[i]>m2[i]){
                    movie1+=m1[i];
                }
                else{
                    movie2+=m2[i];
                }
            }
        }

        for(ll i=0;i<n;i++){
            if(m1[i]==m2[i]){
                if(m1[i]<0){
                    if(movie1>movie2){
                        movie1+=m1[i];
                    }
                    else{
                        movie2+=m1[i];
                    }
                }
                else{
                    if(movie1>movie2){
                        movie2+=m1[i];
                    }
                    else{
                        movie1+=m1[i];
                    }
                }
            }
        }

        cout<<(movie1<movie2? movie1:movie2)<<endl;
    }

    return 0;
}