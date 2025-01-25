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
        int n;
        cin>>n;
        int ans=n;
        int temp=n;
        vector<int> arr(sqrt(n)+2, 0);

        for(int i=2;i<=sqrt(n)+1;i++){
            temp=n;
            int ct=0;
            while(temp%i==0){
                ct++;
                temp=temp/i;
            }
            arr[i]=ct;
            
        }

        int max_ct=0;
        for(int i=0;i<sqrt(n)+1;i++){
            if(arr[i]>max_ct){
                ans=i;
                max_ct=arr[i];
            }

        }
        
        

        cout<<ans<<endl;

        
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