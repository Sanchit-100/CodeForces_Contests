#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

bool query(int x, int y){
    cout<<"? "<<x<<" "<<y<<endl;
    cout.flush();
    int r;
    cin>>r;
    return r;
}

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> ans(n,0);
        int temp=2;
        while(query(1,temp)){
            temp++;
        }
        ans[temp]=1;
        int low=2;
        for(int i=temp+1;i<n;i++){
            while(true){
                if(!query(i,low)){
                    ans[i]=low;
                    low++;
                    break;
                }
                else{
                    low++;
                }
            }
        }

        cout<<"! ";
        for(int i=1;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
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