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
        int n;
        cin>>n;

        vector<int> a(n+1,0);
        vector<int> pre(n+1,0);
        for(int i=1;i<n+1;i++){
            cin>>a[i];
            pre[i]=pre[i-1]+a[i];
        }

        int minimum=0;
        for(int i=1;i<n+1;i++){
            minimum=min(minimum,pre[i]);
        } 

        cout<<pre[n]-(2*minimum)<<endl;



        
        
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