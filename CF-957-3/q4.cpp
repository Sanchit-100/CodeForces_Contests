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
        int n,m,k;
        cin>>n>>m>>k;

        string a;
        cin>>a;
        vector<int> arr;
        arr.push_back(0);
        for(int i=0;i<n;i++){
            if(a[i]=='C') arr.push_back(2);
            else if(a[i]=='W') arr.push_back(1);
            else arr.push_back(0);
        }
        arr.push_back(0);

        
        int i=0;
        int water_travelled=0;
        bool ans=true;
        int last_safe=0;
        int flag=0;
        while(i<n+1 && water_travelled<=k){
            // cout<<i<<endl;
            if(arr[i]==0){
                flag=0;
                for(int j=1;j<m+1;j++){
                    if(arr[i+j]==0){
                        i=i+j;
                        flag=1;
                        break;
                    }
                    else if(arr[i+j]==1){
                        last_safe=i+j;
                        
                    }
                }

                if(flag!=1){
                    if(last_safe>i) i=last_safe;
                    else i++;
                }

            }
            else if(arr[i]==1){
                water_travelled+=1;
                i++;
            }
            else{
                ans=false;
                break;
            }
        }

        if(water_travelled>k) ans=false;


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