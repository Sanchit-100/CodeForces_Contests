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


    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(auto &it:arr) cin>>it;
    sort(arr.begin(),arr.end());
    int ans=0;
    for(auto it:arr){
        if(ans==it) ans++;
    }

    cout<<ans<<endl;


}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}