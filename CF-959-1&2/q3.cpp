#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

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

        int final=0;
        final=((n*(n-1))/2)+n;
        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;

        vector<int> zeroes(n,0);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>x) sum=0;
            zeroes[i]=sum;
        }

        // for(auto it:zeroes) cout<<it<<" ";
        // cout<<endl;

        int num=0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(zeroes[i]==0){
                ans+=1;
                num++;
            }
            zeroes[i]=num;
        }

        vector<int> prefix(n,0);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }

        // for(auto it:zeroes) cout<<it<<" ";
        // cout<<endl;

        sum=0;
        for(int i=0;i<n;i++){
            if(upper_bound(prefix.begin(),prefix.end(),x+prefix[i])!=prefix.end()){
                ans+=max(zeroes[upper_bound(prefix.begin(),prefix.end(),x+prefix[i])-prefix.begin()],ll(1));
            }
        }

        // cout<<ans<<endl;
        final-=ans;
        cout<<final<<endl;
        
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