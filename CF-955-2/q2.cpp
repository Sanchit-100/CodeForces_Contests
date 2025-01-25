#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;

using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;

        ll rem=0;
        while(k>0){
            if(x==1){
                rem=y-1;
                if(k>=rem){
                    x=x+(k%rem);
                    break;
                }
                else{
                    x=x+k;
                    break;
                }
            }
            rem=x%y;
            rem=y-rem;
            if(k>=rem){
                k-=rem;
                x+=rem;
                while(x%y==0){
                    x=x/y;
                }
            }
            else{
                x=x+k;
                break;
            }
        }

        cout<<x<<endl;
    }

    return 0;
}