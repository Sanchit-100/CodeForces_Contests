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
        int n,m,k;
        cin>>n>>m>>k;

        vector<int> ans;
        vector<int> a;
        vector<int> d;
        for(int i=1;i<n+1;i++){
            a.push_back(i);
            d.push_back(i);
        }

        sort(d.begin(),d.end(),greater<int>());
        for(int i=0;i<n-m;i++){
            ans.push_back(d[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(a[i]);
        }

        for(auto it:ans) cout<<it<<" ";
        cout<<endl;
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