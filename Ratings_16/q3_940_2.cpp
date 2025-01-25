#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int a,b;

        for(int i=0;i<k;i++){
            cin>>a>>b;
            if(a==b) n--;
            else n-=2;
        }

        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<n+1;i++){
            dp[i]=(dp[i-1]+(dp[i-2]*(i-1)*2))% int(1e9+7);
        }

        cout<<dp[n]<<endl;
        
        
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