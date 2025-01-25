#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;



void solve()
{
    int n;
    cin>>n;

    vector<int> arr(n,0);
    for(auto &it:arr) cin>>it;

    int rounds=0;

    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            rounds++;
            max=arr[i];
        }

    }

    cout<<rounds<<endl;
    

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}