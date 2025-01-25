#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>
#include<string>
#include<climits>
#define MAX 10000000
#define int ll

using namespace std;
using ll = long long;

void solve() {
    int t;
    cin >> t;
    
    for(int i=0;i<t;i++){
        int ans=0;
        vector<vector<int>> grid(6, vector<int>(7,-1));
        for(int j=0;j<6;j++){
            for(int k=0;k<7;k++){
                char y;
                cin>>y;
                grid[j][k] = (y=='C'?0:1);
            }
        }

        for(int j=0;j<6;j++){
            for(int k=0;k<7;k++){
                char y;
                cin>>y;
                grid[j][k] = (y=='C'?0:1);
            }
        }
        

        cout<<"Case #"<<i+1<<": "<<ans<<endl; 
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream infile("test3.txt");
    if (!infile) {
        cerr << "Unable to open file test.txt";
        return 1; // Return an error code
    }

    cin.rdbuf(infile.rdbuf());
    solve();
    return 0;
}
