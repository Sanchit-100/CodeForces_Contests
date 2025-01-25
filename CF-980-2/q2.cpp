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
        int n,k;
        cin>>n>>k;
        int org_k=k;
        vector<int> arr(n,0);
        for(auto &it: arr) cin>>it;

        sort(arr.begin(), arr.end());
        int ct_taken=0;
        int zero_slots=0;
        
        
        for(int i=0;i<n;i++){
            if((arr.size()-i)*(arr[i]-ct_taken)>=k) break;
            else{
                k-=(arr.size()-i)*(arr[i]-ct_taken);
                ct_taken=arr[i];
                zero_slots+=1;
            }
        }
        cout<<org_k+zero_slots<<endl;
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