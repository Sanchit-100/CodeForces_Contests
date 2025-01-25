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
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;

        bool ans=1;

        if((x1>y1 && x2<y2) || (x1<y1 && x2>y2)) ans=0;

        cout<<(ans?"YES":"NO")<<endl;
    }

    return 0;
}