#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;


int f(int idx, int state,vector<vector<int>> &dp, vector<int> &arr){
    if(idx==-1){
        return 0;
    }
    else if(dp[idx][state]!=-1) return dp[idx][state];

    if(state==0){
        int temp = f(idx-1,0,dp,arr);
        if(temp<arr[idx]){
            return dp[idx][state] = temp+1;
        }
        else if(temp>arr[idx]){
            return dp[idx][state] = temp-1;
        }
        else{
            return dp[idx][state] = temp;
        }
    }
    else if(state==1){
        int temp = f(idx-1,0,dp,arr);
        int temp2 = f(idx-1,1,dp,arr);
        
        return dp[idx][state] = max(temp,temp2);
    }
    else{
        int temp = f(idx-1,1,dp,arr);
        int temp2 = f(idx-1,2,dp,arr);

        int op1=0;
        int op2=0;
        if(temp<arr[idx]){
            op1 = temp+1;
        }
        else if(temp>arr[idx]){
            op1 = temp-1;
        }
        else{
            op1 = temp;
        }

        if(temp2<arr[idx]){
            op2 = temp2+1;
        }
        else if(temp2>arr[idx]){
            op2 = temp2-1;
        }
        else{
            op2 = temp2;
        }

        return dp[idx][state] = max(op1,op2);
    }
    
    
}
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n,0);
        for(auto &it: arr) cin>>it;

        vector<vector<int>> dp(n,vector<int>(3,-1));
        cout<<min(max(f(n-1,1,dp,arr),f(n-1,2,dp,arr)),n-1)<<endl;
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