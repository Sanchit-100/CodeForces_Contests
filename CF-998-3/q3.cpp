#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<map>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());
        int score=0;

        map<int,int> mp;
        for(int i=1;i<n;i++) mp[i]=0;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        // cout<<mp[arr[0]]<<endl;
        // cout<<mp[arr[1]]<<endl;

        for(int i=1;i<=k/2;i++){
            if(k%2==0 && i==k/2){
                score+=mp[i]/2;
            }
            else{
                score+=min(mp[i],mp[k-i]);
            }
        } 

        cout<<score<<endl;
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