#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;



void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
        int c=0;
        int ways=0;
        for(int a=1;a<min(n,x);a++){
            for(int b=1;a+b<x && a*b<n;b++){
                c=min(((n-(a*b))/(a+b)),x-b-a);
                c=max(c,0ll);
                ways+=c;
            }
        }

        cout<<ways<<endl;
    }



}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}