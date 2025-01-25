#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>
#include<string>
#include<climits>
# define MAX 10000000
#define int ll

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;
    
    vector<int> arr;
    for(int i=0;i<t;i++){
        int ans = 0;
        int a,b,m;
        cin>>a>>b>>m;
        
        
        for(int j=1;j<=18;j+=2){
            vector<int> v(j,0);
            int mid=j/2;
            for(int k=1;k<=9;k++){
                v[mid]=k;
            }
        }
        cout<<"Case #"<<i+1<<": "<<ans<<endl; 
    }

}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream infile("tester.txt");
    if (!infile) {
        cerr << "Unable to open file test.txt";
        return 1; // Return an error code
    }

    cin.rdbuf(infile.rdbuf());
    solve();

    return 0;
}