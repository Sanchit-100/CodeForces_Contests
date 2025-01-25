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

        string a;
        cin>>a;

        int c0=0;
        int c1=0;
        int temp=0;
        
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                temp++;
            }
            else{
                c1++;
                if(temp>0) c0++;
                temp=0;
            }
        }

        if(temp>0) c0++;

        // cout<<c0<<" "<<c1<<endl;

        cout<<((c1>c0)?"YES":"NO")<<endl;
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