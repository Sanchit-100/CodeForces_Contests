#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<math.h>
#include<map>
#include<climits>
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
        int n;
        cin>>n;

        string s;
        cin>>s; 
        int ans=0;
        deque<int> helper;
        for(int i=n-1;i>=0;i--){
            ans+=i+1;
            if(s[i]=='1'){
                helper.push_back(i+1);
            }
            else{
                if(helper.size()>0){
                    ans=ans-helper.front();
                    // cout<<helper.front()<<endl;
                    helper.pop_front();
                }
                
            }
        }

        while(helper.size()>=2){
            ans-=helper.front();
            helper.pop_back();
            helper.pop_front();
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