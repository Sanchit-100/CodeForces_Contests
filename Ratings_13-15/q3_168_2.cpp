#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

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
        int last_2=-1;
        int last=0;
        for(int i=1;i<n;i+=2){
            if(s[i]=='('){
                last_2=last;
                last=i;
            }

            else if(s[i]==')'){
            
                ans+=i-last;
                last=last_2;
                last_2=-1;
            
            }

            if(i!=n-1){
                if(last>=0){
                ans+=(i+1)-last;
                last=last_2;
                last_2=-1;
                
            }
                else{
                    last=i+1;
                }
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