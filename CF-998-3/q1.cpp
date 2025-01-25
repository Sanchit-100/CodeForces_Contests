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
        int a , b, d , e, c;
        cin>>a>>b>>d>>e;

        int ans=0;
        int maxm=1;

        c=a+b;
        if(a+b==c){
            ans++;
        }
        if(b+c==d) ans++;
        if(c+d==e) ans++;

        maxm=max(maxm,ans);
        ans=0;


        c=e-d;
        if(a+b==c){
            ans++;
        }
        if(b+c==d) ans++;
        if(c+d==e) ans++;

        maxm=max(maxm,ans);
        ans=0;

        c=d-b;
        if(a+b==c){
            ans++;
        }
        if(b+c==d) ans++;
        if(c+d==e) ans++;

        maxm=max(maxm,ans);
        
        cout<<maxm<<endl;
        
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