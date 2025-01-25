#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<map>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,m1,m2;
        cin>>n>>m1>>m2;

        vector<vector<int>> adjG(n,vector<int>());
        vector<vector<int>> adjF(n,vector<int>());
        

        for(int i=0;i<m1;i++){
            int a,b;
            cin>>a>>b;
            adjF[a].push_back(b);
            adjF[a].push_back(b);
        }

        for(int i=0;i<m2;i++){
            int a,b;
            cin>>a>>b;
            adjG[a].push_back(b);
            adjG[a].push_back(b);
        }

        vector<vector<int>> pathF(n,vector<int>(n,0));
        vector<vector<int>> pathG(n,vector<int>(n,0));

        
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