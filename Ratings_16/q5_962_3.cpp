#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<string>

#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        
        vector<int> prefix(s.length()+1,0);
        prefix[0]=0;
        for(int i=1;i<s.length()+1;i++){
            prefix[i]=prefix[i-1]+(s[i-1]=='1'?1:-1);
        }

        int ans=0;
        map<int,int> ct;

        for(int i=0;i<s.length()+1;i++){
            ans+=(ct[prefix[i]]*(s.length()-i+1));
            ans=ans%ll(1e9+7);
            ct[prefix[i]]+=i+1;
            ct[prefix[i]]=ct[prefix[i]]%ll(1e9+7);

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