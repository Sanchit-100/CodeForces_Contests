#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<climits>
#include<string>
#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int use = min(x,y);

        cout<<0<<" "<<0<<" "<<use<<" "<<use<<endl;
        cout<<0<<" "<<use<<" "<<use<<" "<<0<<endl;
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