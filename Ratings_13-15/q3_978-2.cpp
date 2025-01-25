#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<climits>
#include<string>
#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;

int rec(vector<vector<int>> grid, int i, int j, vector<vector<int>> &dp){
    int n = grid[0].size();
    //base case
    if(i==n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int temp=0;
    int temp2= 0;
    if(i<j){
        if((j+3)<n){
            temp+=grid[0][i]+grid[0][i+1]+grid[0][i+2];
            temp2+=grid[1][j]+grid[1][j+1]+grid[1][j+2];
            temp = temp>=2?1:0;
            temp2 = temp2>=2?1:0;
            int ch1 = temp+temp2+rec(grid,i+3,j+3,dp);

            temp=0;
            temp+=grid[0][i]+grid[0][i+1]+grid[1][j];
            temp = temp>=2?1:0;
            int ch2 = temp+rec(grid,i+2,j+1, dp);

            return dp[i][j] = max(ch1,ch2);
        }
        else{
            temp=0;
            temp+=grid[0][i]+grid[0][i+1]+grid[1][j];
            temp = temp>=2?1:0;
            int ch2 = temp+rec(grid,i+2,j+1, dp);

            return dp[i][j] = ch2;
        }
    }
    else if(i==j){
        temp+=grid[0][i]+grid[0][i+1]+grid[0][i+2];
        temp2+=grid[1][j]+grid[1][j+1]+grid[1][j+2];
        temp = temp>=2?1:0;
        temp2 = temp2>=2?1:0;
        int ch1 = temp+temp2+rec(grid,i+3,j+3, dp);
        
        temp=0;
        temp+=grid[0][i]+grid[1][j]+grid[1][j+1];
        temp = temp>=2?1:0;
        int ch2 = temp+rec(grid,i+1,j+2, dp);

        temp=0;
        temp+=grid[0][i]+grid[0][i+1]+grid[1][j];
        temp = temp>=2?1:0;
        int ch3 = temp+rec(grid,i+2,j+1, dp);

        return dp[i][j] = max(ch1,max(ch2,ch3));
    }

    else{
        if((i+3)<n){
            temp+=grid[0][i]+grid[0][i+1]+grid[0][i+2];
            temp2+=grid[1][j]+grid[1][j+1]+grid[1][j+2];
            temp = temp>=2?1:0;
            temp2 = temp2>=2?1:0;
            int ch1 = temp+temp2+rec(grid,i+3,j+3, dp);

            temp=0;
            temp+=grid[0][i]+grid[1][j]+grid[1][j+1];
            temp = temp>=2?1:0;
            int ch2 = temp+rec(grid,i+1,j+2, dp);

            return dp[i][j] = max(ch1,ch2);
        }
        else{
            temp=0;
            temp+=grid[0][i]+grid[1][j]+grid[1][j+1];
            temp = temp>=2?1:0;
            int ch2 = temp+rec(grid,i+1,j+2, dp);

            return dp[i][j] = ch2;
        }
    }
}
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<vector<int>> grid(2,vector<int> (n,0));
        vector<vector<int>> dp(n,vector<int> (n,-1));
        string a,b;
        cin>>a>>b;
        for(int j=0;j<n;j++){
            grid[0][j] = (1?a[j]=='A':0);
        }
        for(int j=0;j<n;j++){
            grid[1][j] = (1?b[j]=='A':0);
        }

        int ans = rec(grid,0,0,dp);
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