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
        int n;
        cin>>n;

        vector<int> arr(n,0);

        for(auto&it: arr) cin>>it;
        sort(arr.begin(), arr.end());
        int ops=0;
        int j=2;
        int ans=n-2;
        
        for(int i=0;i<n-2;i++){
            j=max(j,i+2);

            while(j<n && arr[i]+arr[i+1]>arr[j]){
                j++;
            }
            
            ops = i+ abs(n-j);
            ans = min(ans,ops);
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