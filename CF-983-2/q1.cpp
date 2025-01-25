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
        int n;
        cin>>n;

        int temp=-1;
        int number_1=0;
        int number_0=0;
        for(int i=0;i<(2*n);i++){
            cin>>temp;
            if(temp==1) number_1++;
            else number_0++;
        }
        int minm=-1;
        int maxm=-1;
        if(number_1%2==0) minm=0;
        else minm=1;

        maxm=min(number_0,number_1);

        cout<<minm<< " " <<maxm<<endl;
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