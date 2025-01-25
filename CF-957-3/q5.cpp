#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>

#define int ll

using namespace std;
using ll=long long;


void solve()
{
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;

        string clone=n;
        int req1=0;
        int req2=0;
        int ans=0;
        int temp=0;
        int temp2=0;
        vector<pair<int,int>> ans2;
        for(int a=2;a<10000;a++){
            for(int b=1;b<a;b++){
                temp=a-(ceil(double(b)/(n.size())));
                temp2=b%n.size();
                temp2=n.size()-temp2;
                req1=(stoi(n)*a)-b;
                while(temp--){
                    clone+=n;
                }

                for(int i=0;i<temp2;i++) clone+=n[i];

                req2=stoull(clone);
                if(req1==req2){
                    ans+=1;
                    ans2.push_back({a,b});
                }

            }
        }

        cout<<ans<<endl;
        for(int i=0;i<ans;i++){
            cout<<ans2[i].first<<" "<<ans2[i].second;
            cout<<endl;
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