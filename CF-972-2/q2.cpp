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
        int n,m,q,m1,m2,d;
        cin>>n>>m>>q;
        cin>>m1>>m2;
        cin>>d;

        if((d<m1 && d>m2)||(d>m1 && d<m2)){
            cout<<((max(m1,m2)+min(m1,m2))/2)-min(m1,m2)<<endl;;
        }
        else{
            if(m1<d){
                cout<<n-max(m1,m2)<<endl;
            }
            else{
                cout<<min(m1,m2)-1<<endl;
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