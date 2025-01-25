#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<climits>
#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;

int maximum(int a,int b){ return (a>b?a:b);}
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;

        int lowest=0;
        int highest=0;

        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max<arr[i]) max=arr[i];
        }

        for(int i=0;i<n;i++){
            int temp=(max-arr[i])%(k*2);
            if(temp>=k) lowest=min(lowest,temp-(k*2));
            else highest=maximum(highest,temp);

        }

        highest=k-highest;
        lowest=abs(lowest);

        if(lowest==0) cout<<max<<endl;
        else if(highest>lowest) cout<<max+lowest<<endl;
        else cout<<-1<<endl;
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