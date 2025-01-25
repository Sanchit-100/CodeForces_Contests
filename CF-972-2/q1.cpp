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
        int n;
        cin>>n;

        int q=n/5;
        int r=n%5;

        string s="aeiou";
        string ans="";

        for(int curr=0;curr<5;curr++){
            if(curr<r) ans+=string(q+1,s[curr]);
            else ans +=string(q,s[curr]);
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