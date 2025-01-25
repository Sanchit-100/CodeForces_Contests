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
        string a,b;
        cin>>a>>b;

        int ans=true;
        for(int i=0;i<n;i++){
            if(a[i]=='1') break;
            
            if(a[i]!=b[i]){
                ans=false;
                break;
            }

        }

        cout<<(ans?"YES":"NO")<<endl;
        
        
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