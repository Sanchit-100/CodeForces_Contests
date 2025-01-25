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
        int n,k;
        cin>>n>>k;

        vector<int> h(n,0);
        vector<int> f(n,0);

        for(auto &it:f) cin>>it;
        for(auto &it:h) cin>>it;

        int fruits=0;
        int i=0,j=0;
        int ans=0;

        while(i<n && j<n){

            fruits+=f[j];
            
            while(fruits>k){
                fruits-=f[i];
                i++;
            }

            ans=max(ans,j-i+1);

            if(j<n-1 && h[j]%h[j+1]==0){
                j++;
            }
            else{
                fruits=0;
                j++;
                i=j;
            }

            

        }

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