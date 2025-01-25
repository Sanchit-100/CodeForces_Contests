#include <iostream>
#include<vector>
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
        int n,m;
        cin>>n>>m;

        vector<int> petals(n,0);
        vector<int> qty(n,0);

        for(auto& it:petals) cin>>it;
        for(auto& it:qty) cin>>it;

        vector<pair<int,int>> final(n,{0,0});
        for(int i=0;i<n;i++){
            final[i]={petals[i],qty[i]};
        }

        sort(final.begin(),final.end());

        int maxm=0;
        for(int i=0;i<n-1;i++){
            int petal=final[i].first;
            int flowers=final[i].second;
            int petal_2=final[i+1].first;
            int flowers_2=final[i+1].second;

            if(petal+1==petal_2){
                int max_flowers=m/petal;
                if(max_flowers>flowers){
                    int rem_money=m-(flowers*petal);
                    int high_max=min(rem_money/(petal_2),flowers_2);
                    int total=(flowers*petal)+(high_max*petal_2);
                    rem_money=m-flowers*petal-high_max*petal_2;
                    int next_flowers_rem=flowers_2-high_max;
                    total=total+min(min(rem_money,next_flowers_rem),flowers);
                    
                    maxm=max(maxm,total);
                }
                else{
                    int total=max_flowers*petal+min(min(m-(flowers*petal),flowers_2),max_flowers);
                    maxm=max(maxm,total);
                }
            }
        }

        for(int i=0;i<n;i++){
            maxm=max(maxm,min(m/final[i].first,final[i].second)*final[i].first);
        }

        cout<<maxm<<endl;
        
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