#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;
        vector<int> pre(n+1,0);
        for(int i=1;i<n+1;i++){
            pre[i]=pre[i-1]+arr[i-1];
        }

        // for(auto it:pre) cout<<it<<" ";
        // cout<<endl;

        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            int sum=pre[r]-pre[l-1];
            int pos=r-l+1;
            int lim=(ceil(pos/2.0)*2)+(pos-(ceil(pos/2.0)));
            // cout<<sum<<" "<<pos<<" "<<lim<<endl;
            if(pos==1){
                cout<<"NO"<<endl;
            }
            else if(sum<lim){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
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