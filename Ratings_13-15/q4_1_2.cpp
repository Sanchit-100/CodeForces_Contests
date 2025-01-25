#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        
        if(n==1) cout<<1<<endl<<1;
        else if(n==2) cout<<2<<endl<<1<<" "<<2;
        else if(n==3) cout<<2<<endl<<"1 2 2";
        else if(n==4) cout<<3<<endl<<"1 2 2 3";
        else if(n==5) cout<<3<<endl<<"1 2 2 3 3";
        else{
            cout<<4<<endl;
            for(int i=1;i<=n;i++){
                cout<<i%4+1<<" ";
            }
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