#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<map>
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

        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        for(int i=0;i<n-1;i++){
            int temp=min(arr[i],arr[i+1]);
            arr[i]-=temp;
            arr[i+1]-=temp;
        }

        int ans=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                ans=0;
                break;
            }
        }

        if(ans==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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