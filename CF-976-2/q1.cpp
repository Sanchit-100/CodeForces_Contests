#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

int log_a_to_base_b(int a, int b)
{
    return floor(log2(a) / log2(b));
}

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==1) cout<<n<<endl;
        else{
            int ct=0;
            while(n>0){
                int temp=log_a_to_base_b(n,k);
                int temp2=round(pow(k,temp));
                int temp3=n/temp2;
                ct+=temp3;
                n = n- (temp3*temp2);
                // cout<<n<<" "<<temp<<" "<<temp2<<" "<<temp3<<endl;
            }

            cout<<ct<<endl;
            
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