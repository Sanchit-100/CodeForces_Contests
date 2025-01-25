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
        string s;
        cin>>s;
        
        int ans=0;
        int num_of_a=0;
        for(auto it:s){
            num_of_a+=(it=='A'?1:0);
        }

        int min_a_string=INT_MAX;
        int temp=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                temp++;
            }
            else{
                min_a_string=min(min_a_string,temp);
                temp=0;
            }
        }
        min_a_string=min(min_a_string,temp);

        if(s[0]=='B' || s[s.length()-1]=='B') ans=num_of_a;
        else{
            ans=num_of_a-min_a_string;
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