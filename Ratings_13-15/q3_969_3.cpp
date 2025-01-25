#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<climits>

#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


int gcd(int a, int b) 
{ 
    // Find Minimum of a and b 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    // Return gcd of a and b 
    return result; 
} 
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n,0);
        for(auto &it:arr) cin >>it;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd)
            }
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