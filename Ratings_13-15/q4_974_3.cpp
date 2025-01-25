#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>

#define int ll

using namespace std;
using ll=long long;



void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n,d,k;
        cin>>n>>d>>k;
        vector<int> start(k,0);
        vector<int> end(k,0);
        for(int i=0;i<k;i++){
            cin>>start[i];
            cin>>end[i];
        }

        
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        for(int i=0;i<end.size();i++){
            end[i]=min(end[i]+(d-1),n);
        }

        vector<int> final(n+1,0);
        int ct=0;
        int i=0; //start
        int j=0; //end
        for(int k=0;k<n+1;k++){
            while(i<start.size() && start[i]==k){
                ct++;
                i++;
            }
            
            final[k]=ct;
            
            while(j<end.size() && end[j]==k){
                ct--;
                j++;
            }
        }

        int max=0;
        int min=INT_MAX;
        int max_idx=1;
        int min_idx=1;

        for(int i=d;i<n+1;i++){
            if(final[i]>max){
                max_idx=i;
                max=final[i];
            } 
            if(final[i]<min){
                min_idx=i;
                min=final[i];
            } 
        }

        cout<<max_idx-(d-1)<<" "<<min_idx-(d-1)<<endl;

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