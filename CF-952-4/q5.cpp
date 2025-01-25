#include<iostream>
#include<string>
#include<vector>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll x,y,z,k;
        cin>>x>>y>>z>>k;

        ll max=0;
        float c=0;
        for(ll a=1;a<=x;a++){
            for(ll b=1;b<=y;b++){
                c=float(k)/(a*b);
                if(c==k/(a*b) && c<=z && c>0){
                    ll temp=(x-a+1)*(y-b+1)*(z-c+1);
                    if(temp>max){
                        max=temp;
                        cout<<a<<" "<<b<<" "<<c<<endl;
                    } 
                }
            }
        }

        cout<<max<<endl;

        

    }


    return 0;
}