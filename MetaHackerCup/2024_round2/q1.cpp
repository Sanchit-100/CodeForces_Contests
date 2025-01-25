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
    vector<int> arr = {1,2,3,4,5,6,7,8,9,121,232,343,454,565,676,787,898,12321,23432,34543,45654,56765,67876,78987,1234321,2345432,3456543,4567654,5678765,6789876,123454321,234565432,345676543,456787654,567898765,
    12345654321,23456765432,34567876543,45678987654,1234567654321,2345678765432,3456789876543,123456787654321,234567898765432,12345678987654321};
    for(int i=0;i<t;i++){
        int ans = 0;
        int a,b,m;
        cin>>a>>b>>m;
        // int idx1 = lower_bound(arr.begin(), arr.end(),a)-arr.begin();
        // int idx2 = lower_bound(arr.begin(), arr.end(),b)-arr.begin();


        for(int j=0;j<=arr.size()-1;j++){
            if(arr[j]%m==0 && (arr[j]>=a &&arr[j]<=b)) ans++;
        }
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