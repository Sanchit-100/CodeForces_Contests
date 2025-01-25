#include <iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>
#include<string>
#include<climits>

#define int ll
#define mod 998244353;

using namespace std;
using ll=long long;


void solve()
{
    
    int t;
    cin>>t;
    

    for(int i=0;i<t;i++){
        int w,g,l;
        cin>>w>>g>>l;
        int ans=0;
        ans = (2*l)%mod;
        ans+=1;
        ans=ans%mod;
        int temp = (w-g)%mod;
        ans=ans*temp;
        ans=ans%mod;

        cout<<"Case #"<<i+1<<": "<<ans<<endl; 
    }

}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream infile("test2.txt");
    if (!infile) {
        cerr << "Unable to open file test.txt";
        return 1; // Return an error code
    }

    cin.rdbuf(infile.rdbuf());
    solve();

    return 0;
}