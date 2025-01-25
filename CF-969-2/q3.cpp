#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

int gcd(int a, int b) 
{ 
    // Everything divides 0 
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
} 
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> arr(n,0);
        for(auto &it:arr) cin>>it;

        int g=gcd(a,b);
        vector<int> final;
        for(auto it:arr){
            final.push_back(it%g);
        }

        sort(final.begin(),final.end());
        int minimum=g;
        
        if(final.size()>1){
            for(int i=1;i<final.size();i++){
                minimum=min(minimum,final[i-1]+g-final[i]);
            }
        }
        
        minimum=min(minimum,final[final.size()-1]-final[0]);
        cout<<minimum<<endl;
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