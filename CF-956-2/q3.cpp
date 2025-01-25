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
        int n;
        cin>>n;

        vector<vector<int>> org(3,vector<int>(n+1));
        vector<vector<int>> pre_sum(3,vector<int>(n+1));

        for(int i=0;i<3;i++){
            for(int j=1;j<n+1;j++){
                cin>>org[i][j];
                pre_sum[i][j]+=pre_sum[i][j-1]+org[i][j];
            }
        }

        vector<int> perm={0,1,2};
        int target=(pre_sum[0][n]+2)/3;
        bool ok=0;
        vector<pair<int,int>> ans(3);
        int curr=1;
        for(int i=0;i<6;i++){
            curr=1;
            while(curr<=n && pre_sum[perm[0]][curr]<target) curr++;
            for(int j=curr+1;j<=n;j++){
                if(pre_sum[perm[1]][j]-pre_sum[perm[1]][curr]>=target && pre_sum[perm[2]][n]-pre_sum[perm[2]][j]>=target){
                    ans[perm[0]]={1,curr};
                    ans[perm[1]]={curr+1,j};
                    ans[perm[2]]={j+1,n};
                    ok=1;
                    break;
                }
            }

            if(ok){
                break;
            }

            next_permutation(perm.begin(),perm.end());
        }

        if(ok){
            cout<<ans[0].first<<" "<<ans[0].second<<" "<<ans[1].first<<" "<<ans[1].second<<" "<<ans[2].first<<" "<<ans[2].second<<endl;
        }
        else cout<<-1<<endl;

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