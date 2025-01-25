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
        int n,k;
        cin>>n>>k;
        vector<int> lengths(k,0);
        for(auto &it:lengths) cin>>it;

        sort(lengths.begin(),lengths.end());
        int sum=0;
        for(auto it:lengths) sum+=it;
        sum-=lengths[k-1];

        for(int i=0;i<k-1;i++){
            sum+=(lengths[i]-1);
        }

        cout<<sum<<endl;
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