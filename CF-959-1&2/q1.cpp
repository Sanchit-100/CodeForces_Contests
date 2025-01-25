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
        
        vector<vector<int>> matrix(n,vector<int>(m,-1));
        
        if(n==1 && m==1){
            cin>>matrix[0][0];
            cout<<-1<<endl;
        } 
        else if(m!=1){
            for(int i=0;i<n;i++){
                for(int j=1;j<=m;j++){
                    cin>>matrix[i][j%m];
                }
            }
        }

        else{
            for(int i=1;i<=n;i++){
                cin>>matrix[i%n][0];
            }
        }

        if(n==1 && m==1){
            ;
        }
        else{
            for(auto it:matrix){
                for(auto j:it){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
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