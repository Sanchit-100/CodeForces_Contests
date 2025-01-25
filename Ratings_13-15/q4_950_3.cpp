#include <iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<math.h>

#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;

int gcd(int a, int b) 
{ 
    // Find Minimum of a and b 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    // Return gcd of a and b 
    return result; 
} 
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n,0);
        for(auto &it:a) cin>>it;

        int fixed=0;
        int curr_gcd=0;
        for(int i=0;i<n-1;i++){
            if(curr_gcd>gcd(a[i],a[i+1])){
                fixed=i;
                break;
            }

            curr_gcd=gcd(a[i],a[i+1]);
        }

        int ans=0;
        
        if(fixed==0 || fixed==n-1){
            ans=1;
        }
        else{
            ans=1;
            vector<int> b,c,d;
            b=a;
            c=a;
            d=a;
            b.erase(b.begin()+fixed-1);
            c.erase(b.begin()+fixed);
            d.erase(c.begin()+fixed+1);

            curr_gcd=0;
            for(int i=0;i<n-2;i++){
                if(curr_gcd>gcd(b[i],b[i+1])){
                    ans=0;
                    break;
                }
                curr_gcd=gcd(b[i],b[i+1]);
            }

            curr_gcd=0;
            if(ans==0){
                for(int i=0;i<n-2;i++){
                    if(curr_gcd>gcd(c[i],c[i+1])){
                        ans=0;
                        break;
                    }
                    curr_gcd=gcd(c[i],c[i+1]);
                }
            }

            curr_gcd=0;

            if(ans==0){
                for(int i=0;i<n-2;i++){
                    if(curr_gcd>gcd(d[i],d[i+1])){
                        ans=0;
                        break;
                    }

                    curr_gcd=gcd(d[i],d[i+1]);
                }
            }

        }
        cout<<(ans?"YES":"NO")<<endl;

        
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