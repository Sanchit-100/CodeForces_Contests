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
        int n,m,v;
        cin>>n>>m>>v;

        vector<int> arr(n,0);
        for(auto &it: arr) cin>>it;

        int i=0;
        int j=0;

        int alice=0;
        int members=0;
        int sum=0;
        int temp_alice=0;
        while(i<n && j<n){

            sum+=arr[j];
            if(sum>=v){
                while((sum-arr[i])>=v){
                    temp_alice+=arr[i];
                    i++;
                }
                alice = max(temp_alice,alice);
                temp_alice=0;
                sum=0;
                j++;
                i=j;
                members++;
                if(members>=m) break;
            }
            else{
                j++;
            }
        }

        temp_alice=0;
        for(int k=j;k<n;k++){
            temp_alice+=arr[k];
        }
        alice=max(alice,temp_alice);

        i=n-1;
        j=n-1;

        members=0;
        sum=0;
        temp_alice=0;

        while(i>=0 && j>=0){

            sum+=arr[j];
            if(sum>=v){
                while((sum-arr[i])>=v){
                    temp_alice+=arr[i];
                    i--;
                }
                alice = max(temp_alice,alice);
                temp_alice=0;
                sum=0;
                j--;
                i=j;
                members++;
                if(members>=m) break;
            }
            else{
                j--;
            }
        }

        temp_alice=0;
        for(int k=j;k>=0;k--){
            temp_alice+=arr[k];
        }
        alice=max(alice,temp_alice);

        if(members>=m){
            cout<<alice<<endl;
        }
        else{
            cout<<-1<<endl;
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