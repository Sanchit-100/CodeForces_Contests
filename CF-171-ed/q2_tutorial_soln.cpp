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
        int n;
        cin>>n;

        vector<int> arr(n,0);
        for(auto &it: arr) cin>>it;

        int ans = 1;
        if(n%2==0){
            for(int i=1;i<n;i+=2){
                ans = max(ans,arr[i]-arr[i-1]);
            }
        }
        else{
            vector<int> diff;
            int temp=1;
            ans = LLONG_MAX;
            for(int i=1;i<n;i++) diff.push_back(arr[i]-arr[i-1]);
            for(int i=0;i<n-1;i++){
                temp=1;
                for(int j=0;j<=i-1;j+=2){
                    temp = max(temp,diff[j]);
                }
                for(int j=i+1;j<n-1;j+=2){
                    temp = max(temp,diff[j]);
                }

                ans=min(ans,temp);

            }

            if(ans<1 || n==1) ans=1;
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