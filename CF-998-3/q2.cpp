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
        int n,m;
        cin>>n>>m;

        int final = 1;

        vector<int> ans(n,0);
        vector<vector<int>> grid(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
            }
            sort(grid[i].begin(),grid[i].end());
        }

        for(int i=0;i<n;i++){
            if(final==0) break;
            for(int j=0;j<m-1;j++){
                if(grid[i][j+1]-grid[i][j]!=n){
                    final=0;
                    break;
                }
            }
            
        }

        if(final==0){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                ans[grid[i][0]]=i+1;
            }

            for(auto it:ans) cout<<it<<" ";
            cout<<endl;
        }
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