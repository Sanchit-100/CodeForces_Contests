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
        string n;
        cin>>n;

        string ans="";
        int i=0,j=0;

        vector<int> added(n.length(),0);
        // i for even and j for odd
        while(i<n.length() && j<n.length()){

            while(i<j){

                if(added[i]==1 || added[j]==1) break;
                if(n[j]<n[i]){
                    ans+=n[j];
                    added[j]=1;
                    j++;
                    break;
                }
                else{
                    ans+=n[i];
                    i++;
                }
            }

            while(j<i){

                if(added[i]==1 || added[j]==1) break;
                if(n[i]<n[j]){
                    ans+=n[i];
                    added[i]=1;
                    i++;
                    break;
                }
                else{
                    ans+=n[j];
                    j++;
                }
            }

            while((i<n.length() && j<n.length()) && (((n[i]%2!=0 || n[j]%2==0) || added[i]==1 ) || added[j]==1)){
                if(n[i]%2!=0) i++;
                else if(n[j]%2==0) j++;
                else if(added[i]==1) i++;
                else if(added[j]==1) j++;
            }

        }

        for(int k=min(i,j);k<n.length();k++){
            if(added[k]==0) ans+=n[k];
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