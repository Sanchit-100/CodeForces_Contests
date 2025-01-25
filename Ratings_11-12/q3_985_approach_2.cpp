#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

bool check(int k, vector<int> prefix, vector<int> arr){
    int curr_g=k;
    // cout<<"hello"<<endl;
    for(int i=prefix.size()-1;i>=0;i--){
        if(prefix[i-1]>=curr_g) return true;
        else if(curr_g>arr[i]) curr_g++;
        else curr_g--;
    }
    return false;
}

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n,0);
        for(auto &it: arr) cin>>it;

        vector<int> prefix(n,0);
        int curr_score=1;

        for(int i=1;i<n;i++){
            if(curr_score<arr[i]) curr_score++;
            else if(curr_score>arr[i]) curr_score--;
            prefix[i]=max(prefix[i-1],curr_score);
        }

        // cout<<prefix[0]<<endl;

        int low=0;
        int high=n-1;
        int ans=0;
        while(low<high){
            int mid=(low+high)/2;
            if(check(mid,prefix,arr)){
                low=mid+1;
                ans=mid;
            }
            else high=mid-1;

            // cout<<low<<" "<<high<<endl;
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