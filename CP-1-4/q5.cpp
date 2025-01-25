#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


int f(int ind, int last, int last_pos, string a){
    if(ind==0){
        if(last==int(a[ind])) return 1;
        else return 0;
    }

    if(int(a[ind])==last){
        int new_last=(last_pos+1>=a.length()?-1:int(a[last_pos+1]));
        return f(ind-1,a[ind],ind,a)+f(ind-1,new_last,last_pos+1,a);
    }
    else{
        return f(ind-1,a[ind],ind, a);
    }
}
void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;

    cout<<f(n-1,-1,-1,a);
}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}