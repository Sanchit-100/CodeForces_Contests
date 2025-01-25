#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>
#include<map>

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
        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;

        vector<int> prefix(n,0);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }

        int sum=0;
        double num=(n*(n-1))/2;
        for(int i=n-1;i>0;i--){
            sum+=(prefix[i-1]*arr[i])%int(1e9+7);
        }

        num=(1.0/num)%int(1e9+7);
        cout<<sum*num<<endl;
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