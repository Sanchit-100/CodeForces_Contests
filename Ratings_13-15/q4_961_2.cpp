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
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;

        int cnt=0;
        int last=0;

        bool ans=1;
        for(int i=1;i<n;i++){
            if(arr[i]==1 && arr[i]<arr[i-1]){
                ans=0;
                break;
            }

            int temp1=arr[i];
            int temp2=arr[i-1];
            int curr=0;

            if(temp2>temp1){
                while(temp1<temp2){
                    temp1=temp1*temp1;
                    curr++;
                }

                last+=curr;
            }
            else{
                while(temp2!=1 && temp1>=(temp2*temp2)){
                    temp2=temp2*temp2;
                    curr++;
                }

                last-=curr;
                last=max(0ll,last);
            }

            // cout<<last<<" ";
            cnt+=last;
            
            
        }

        // cout<<endl;
        cout<<(ans?cnt:-1)<<endl;
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