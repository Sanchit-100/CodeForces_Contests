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
    int n,m,l,r;

    while(t--){
        cin>>n>>m;
        char sign;
        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;
        int maximum=0;
        for(auto it:arr) maximum=max(maximum,it);
        for(int i=0;i<m;i++){
            cin>>sign>>l>>r;
            if(l<=maximum && r>=maximum) maximum=(sign=='+'?maximum+1:maximum-1);
            cout<<maximum<<" ";
        }
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