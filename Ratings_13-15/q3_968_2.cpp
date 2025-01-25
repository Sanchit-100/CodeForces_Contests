#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<climits>
#include<string>
#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


bool cmp(const vector<int> &a,const vector<int> &b) 
{ 
	return a[0]>b[0]; 
} 
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

       
        string ans="";
        vector<int> arr(26,0);
        for(char it:s){
            arr[it-97]++;
        }

        vector<vector<int>> arr_new;
        for(int i=0;i<26;i++){
            arr_new.push_back({arr[i],i});
        }

        sort(arr_new.begin(),arr_new.end(),cmp);
        // for(int j=25;j>=0;j--){
        //     if(arr_new[j][0]==0) arr_new.erase(arr_new.begin()+j);
        // }

        while(arr_new[0][0]>=1){
            for(int i=0;i<arr_new.size();i++){
                if(arr_new[i][0]!=0){
                    ans+=char(arr_new[i][1]+97);
                    arr_new[i][0]--;
                }
            }
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