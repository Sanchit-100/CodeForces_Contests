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
        int n,x,sum;
        sum=0;
        cin>>n>>x;
        vector<int> arr(n,0);
        for(auto&it: arr){
            cin>>it;
            sum+=it;
        }

        int ans=0;
        sort(arr.begin(), arr.end());
        ans = max((ll)ceil((double)sum/(double)x),arr[arr.size()-1]);
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