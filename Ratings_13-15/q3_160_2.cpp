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
    int q;
    cin>>q;
    vector<int> arr(30,0);
    while(q--){
        int t,v;
        cin>>t>>v;
        if(t==1){
            arr[v]++;
        }

        else{
            int ans=0;
            int temp=0;
            for(int i=29;i>=0;i--){
                if(v==0){
                    ans=1;
                    break;
                }
                if(arr[i]!=0 && pow(2,i)<=v){
                    temp=min(arr[i],v/int(pow(2,i)));
                    v-=temp*pow(2,i);
                }
            }
            if(v==0) ans=1;
            cout<<(ans?"YES":"NO")<<endl;
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