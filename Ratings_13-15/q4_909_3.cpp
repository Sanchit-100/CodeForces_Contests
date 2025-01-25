#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#define int ll

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n,0);
        for(auto &it:a) cin>>it;

        map<int,int> ct;    
        for(auto it:a) ct[it]++;

        int ans=0;

        for(auto it:ct){
            ans+=(it.second*(it.second-1))/2;
        }

        ans+=ct[2]*ct[1];
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