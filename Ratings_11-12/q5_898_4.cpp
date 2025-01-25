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
        int n,x;
        cin>>n>>x;

        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;

        sort(arr.begin(),arr.end());
        vector<int> need;
        int sum=0;
        int req=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            req=arr[i]*(i+1);
            need.push_back(req-sum);
        }

 
        int ans=0;
        if(x>=need[n-1]){
            x-=need[n-1];
            ans=arr[n-1]+(x/n);
        }
        else{
            int idx=lower_bound(need.begin(),need.end(),x)-need.begin();
            if(need[idx]!=x) idx--;
            ans=arr[idx];
            x=x-need[idx];
            ans=ans + (x/(idx+1));

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