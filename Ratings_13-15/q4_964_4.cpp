#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll

using namespace std;
using ll=long long;

int log_new(int x) {
    int ct = 0;
    int k = 1;
    while (k <= x) {
        k *= 3; ct++;
    }
    return ct-1;
}

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int l,r;
        cin>>l>>r;
        
        int low=log_new(l)+1;
        int high=log_new(r)+1;
        int ans=0;
        for(int i=low;i<=high;i++){
            ans+=(min(ll(pow(3,i)),r)-max(ll(pow(3,i-1)),l))*i;
        }

        ans+=low;
        ans+=high;
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