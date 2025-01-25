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
    
    int n,q;
    cin>>n >>q;
    vector<int> arr(n,0);
    for(auto&it:arr)cin>>it;
    sort(arr.begin(),arr.end());
    while(q--){
        int a;
        cin>>a;

        int idx = lower_bound(arr.begin(),arr.end(),a) - arr.begin();
        if(arr[idx]==a) cout<<a<<endl;
        else if(idx!=0 && (abs(arr[idx]-a)>=(abs(arr[idx-1]-a))))cout<<arr[idx-1]<<endl;
        else cout<<arr[idx]<<endl;
        
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