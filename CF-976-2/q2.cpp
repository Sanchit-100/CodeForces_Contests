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
        int k;
        cin>>k;

        int temp = (2*k)+1;
        int temp2 = (4*k)+1;
        int n = (temp + floor(sqrtl(temp2)))/2;

        
        if(floor(sqrtl(n)) == n-k) cout<<n<<endl;
        else{
            while(floor(sqrtl(n)) != n-k){
                n++;
            }
            cout<<n<<endl;
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