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
        int n,k;
        cin>>n>>k;

        if(k>1 && k<n){
            if(k%2==0){
                cout<<3<<endl;
                cout<<1<<" "<<k<<" "<<k+1<<endl;
            }
            else{
                cout<<5<<endl;
                cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<k+2<<endl;
            }
        }
        else if(n==1 && k==1){
            cout<<1<<endl;
            cout<<1<<endl;
        }

        else{
            cout<<-1<<endl;
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