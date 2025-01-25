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
        int a,b,c;
        cin>>a>>b>>c;
        int temp=0;

        for(int i=0;i<5;i++){
            if(a==min(min(a,b),c)) a++;
            else if (b==min(min(a,b),c)) b++;
            else c++;
        }

        cout<<a*b*c<<endl;
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