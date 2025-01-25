#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

// #define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;



void solve()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;

    int n,m,p,q;
    n=a.length();
    m=b.length();
    p=c.length();
    q=d.length();

    vector<vector<vector<vector<int>>>> dp(n,vector<vector<vector<int>>>(m,vector<vector<int>>(p,vector<int>(q,0))));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<p;k++){
                for(int l=0;l<q;l++){

                    if(a[i]==b[j] && c[k]==b[j] && d[l]==c[k]){
                        if((((i==0 || j==0) || k==0) || l==0)) dp[i][j][k][l] = 1;
                        else dp[i][j][k][l] = 1 + dp[i-1][j-1][k-1][l-1];
                    } 
                    dp[i][j][k][l] = max(max(max(dp[(i>0)?i-1:n-1][j][k][l],dp[i][(j>0)?j-1:m-1][k][l]),dp[i][j][(k>0)?k-1:p-1][l]),dp[i][j][k][(l>0)?l-1:q-1]);
                }
            }
        }
    }

    
    cout<< dp[n-1][m-1][p-1][q-1]<<endl;



}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}