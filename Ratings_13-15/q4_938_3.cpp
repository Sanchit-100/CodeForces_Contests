#include <iostream>
#include<vector>
#include<numeric>
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
        int n,m,k; cin>>n>>m>>k;
        vector<int> a(n,0),b(m,0);
        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;

        map<int,int> req_ct;
        map<int,int> curr_ct;
        int satisfied=0;
        for(auto it: b) req_ct[it]++;
        int ans=0;

        for(int i=0;i<m;i++){
            if(curr_ct[a[i]]<req_ct[a[i]]){
                satisfied++;
            }
            curr_ct[a[i]]++;
            
        } 

        if(satisfied>=k) ans++;
        // cout<<m-1<<" "<<satisfied<<endl;       
        for(int i=m;i<n;i++){
            if(req_ct[a[i-m]]>0){
                if(req_ct[a[i-m]]>=curr_ct[a[i-m]]){
                    satisfied--;
                } 
            }

            curr_ct[a[i-m]]--;

            if(req_ct[a[i]]>0){
                if(curr_ct[a[i]]<req_ct[a[i]]){
                    satisfied++;
                }
            }

            
            curr_ct[a[i]]++;

            if(satisfied>=k) ans++;
            // cout<<i<<" "<<satisfied<<endl;
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