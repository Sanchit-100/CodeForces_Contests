#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        while(n>1){
            n=n-(k-1);
            ans++;
        }

        cout<<ans<<endl;
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