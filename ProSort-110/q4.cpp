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
        int a,b,x;
        cin>>a>>b>>x;
        int temp=a+b;
        if(x%temp==0){
            cout<<1<<endl;
        }
        else if((x%temp)%(abs(a-b))==0){
            cout<<1<<endl;
        }
        
        else cout<<0<<endl;
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