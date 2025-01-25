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
        int n,b,c;
        cin>>n>>b>>c;

        if(b==c && b==0){
            cout<<-1<<endl;
        }
        else if(b==0){
            if(c<=n-1){
                cout<<n-1<<endl;
            }
            else{
                cout<<n<<endl;
            }
        }
        else{
            int i=(n-1-c + b)/b;
            // cout<<i<<endl;
            if(i<0){
                cout<<n<<endl;
            }
            else{
                cout<<n-i<<endl;
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