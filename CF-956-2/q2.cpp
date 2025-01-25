#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define int ll

using namespace std;
using ll=long long;


void solve()
{

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>> a;
        vector<vector<int>> b;
        vector<int> temp;

        for(int i=0;i<n;i++){
            temp.clear();
            string a1;
            cin>>a1;
            for(int j=0;j<m;j++){
                temp.push_back(a1[j]);
            }

            a.push_back(temp);
        }

        for(int i=0;i<n;i++){
            temp.clear();
            string a1;
            cin>>a1;
            for(int j=0;j<m;j++){
                temp.push_back(a1[j]);
            }

            b.push_back(temp);
        }


        vector<vector<int>> diff;
        vector<int> temp2;
        for(int i=0;i<n;i++){
            temp2.clear();
            for(int j=0;j<m;j++){
                temp2.push_back((b[i][j]-a[i][j]<0?b[i][j]-a[i][j]+3:b[i][j]-a[i][j]));
            }

            diff.push_back(temp2);
        }

        bool ans=true;
        int ct=0;
        for(auto it:diff){
            ct=0;
            for(auto it2: it){
                ct+=it2;
            }

            if(ct%3!=0){
                ans=false;
                break;
            }
        }

        for(int i=0;i<m;i++){
            ct=0;
            for(int j=0;j<n;j++){
                ct+=diff[j][i];
            }

            if(ct%3!=0){
                ans=false;
                break;
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