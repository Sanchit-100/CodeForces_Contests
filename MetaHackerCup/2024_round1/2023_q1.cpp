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
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> arr(n,0);
        for(auto &it: arr) cin>>it;

        float ans=0;

        sort(arr.begin(),arr.end());
        if(n==5) ans=((arr[3]+arr[4])/2.0)-((arr[0]+arr[2])/2.0); 
        else ans=((arr[arr.size()-1]+arr[arr.size()-2])/2.0)-((arr[0]+arr[1])/2.0);
        cout<<"Case #"<<i+1<<": "<<ans<<endl; 
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