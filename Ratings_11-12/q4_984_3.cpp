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

        vector<vector<int>> grid(n,vector<int> (m,0));

        for(int i=0;i<n;i++){
            string s;
            cin>>s;

            for(int j=0;j<m;j++){
                grid[i][j]=s[j]-'0';
            }
        }

        int layer=min(n,m)/2;
        int ct=0;

        for(int i=0;i<layer;i++){
            vector<int> arr;
            for(int j=i;j<=m-i-1;j++) arr.push_back(grid[i][j]);
            for(int j=i+1;j<=n-i-1;j++) arr.push_back(grid[j][m-1-i]);
            for(int j=m-i-2;j>=i;j--) arr.push_back(grid[n-i-1][j]);
            for(int j=n-i-2;j>=i+1;j--) arr.push_back(grid[j][i]);
        
            int s=arr.size();
            for(int k=0;k<s;k++){
                if(arr[k]==1 && arr[(k+1)%s]==5 && arr[(k+2)%s]==4 && arr[(k+3)%s]==3){
                    ct++;
                }
            }
        }

        cout<<ct<<endl;
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