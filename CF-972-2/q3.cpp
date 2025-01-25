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
        int n,m,q;
        cin>>n>>m>>q;

        vector<int> ms(m,0);
        for(auto &it:ms) cin>>it;
        
        vector<int> ds(q,0);
        for(auto &it:ds) cin>>it;
        sort(ms.begin(),ms.end());
        


        for(int d:ds){
            if((d>ms[0] && d<ms[ms.size()-1])){
                int m1=lower_bound(ms.begin(),ms.end(),d)-ms.begin()-1;
                int m2=lower_bound(ms.begin(),ms.end(),d)-ms.begin();
                cout<<((ms[m1]+ms[m2])/2)-ms[m1]<<endl;;
            }
            else{
                if(ms[0]>d){
                    cout<<ms[0]-1<<endl;
                }
                else{
                    cout<<n-ms[ms.size()-1]<<endl;
                }
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