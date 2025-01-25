#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll

using namespace std;
using ll=long long;

int log_new(int x) {
    int ct = 0;
    int k = 1;
    while (k <= x) {
        k *= 3; ct++;
    }
    return ct-1;
}

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> arr(0);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            for(int j=0;j<a;j++){
                int temp;
                cin>>temp;

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