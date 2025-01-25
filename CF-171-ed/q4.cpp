#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<math.h>
#include<map>
#include<climits>
#include<string>
#define int ll
#define large 1e9+7;

using namespace std;
using ll=long long;


void solve()
{
    int n;
    cin>>n;

    vector<int> arr(n,0);
    for(auto& it: arr) cin>>it;
    vector<int> prefix;
    prefix.push_back(arr[0]);
    for(int i=1;i<n;i++){
        prefix.push_back(prefix[i-1]+arr[i]);
    }

    int sum = 0;
    for(auto it:prefix) sum+=it;
    vector<int> block_sums(n,0);
    block_sums[0]=sum;
    block_sums[1]=block_sums[0]-(prefix[0]*n);
    for(int i=n-1;i>1;i--){
        int first_number = -1;
        first_number = prefix[n-i] - prefix[n-i-1];
        block_sums[n-i+1] = block_sums[n-i]-(i*first_number);

    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l++;
        r++;
        int block_1=-1;
        int idx_1=-1;
        int block_2=-1;
        int idx_2=-1;

        vector<int> helper;
        for(int i=n;i>0;i--) helper.push_back(i);
        vector<int> helper_prefix;
        helper_prefix.push_back(helper[0]);
        for(int i=1;i<helper.size();i++){
            helper_prefix.push_back(helper_prefix[i-1]+helper[i]);
        }

        block_1 = lower_bound(helper_prefix.begin(), helper_prefix.end(), l) - helper_prefix.begin();
        idx_1 = helper[block_1] - (helper_prefix[block_1] - l)-1;

        block_2 = lower_bound(helper_prefix.begin(), helper_prefix.end(), l) - helper_prefix.begin();
        idx_2 = helper[block_2] - (helper_prefix[block_2] - l)-1;

        int l_number = prefix[block_1+idx_1] - prefix[block_1-1];
        int r_number = prefix[block_2+idx_2] - prefix[block_2-1];

        cout<<
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