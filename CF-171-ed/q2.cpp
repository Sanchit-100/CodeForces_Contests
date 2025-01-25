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
        int ans = 1;
        for(auto& it: arr) cin>>it;

        if(n%2==0){
            for(int i=1;i<n;i+=2){
                ans = max(ans,arr[i]-arr[i-1]);    
            }
        }
        else{
            vector<int> diff;
            for(int i=1;i<n;i++) diff.push_back(arr[i]-arr[i-1]);
            int maxm=1;
            int idx=-1;

            for(int i=0;i<n-1;i++){
                if(diff[i]>maxm){
                    maxm = diff[i];
                    idx=i;
                }
            }

            if(idx%2!=0){
                for(int i=0;i<n-1;i+=2){
                    if(i!=idx && i!=idx+1){
                        ans=max(ans,diff[i]);
                    }
                }
            }
            else{
                for(int i=0;i<n-1;i+=2){
                    if(i!=idx && i!=idx-1){
                        ans=max(ans,diff[i]);
                    }
                }
            }
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