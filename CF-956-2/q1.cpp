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

        for(int i=1;i<n+1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
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