#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    int minA = min(a.first, a.second);
    int minB = min(b.first, b.second);

    if (minA != minB) {
        return minA < minB;
    } else {
        int sumA = a.first + a.second;
        int sumB = b.first + b.second;

        if (sumA != sumB) {
            return sumA < sumB;
        } else {
            // Since they are in pairs, the following lexicographical comparison will suffice
            return a < b;
        }
    }

}
void solve()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            arr.push_back(make_pair(temp1,temp2));
        }

        sort(arr.begin(),arr.end(),customComparator);
        for(int i=0;i<n;i++){
            cout<<arr[i].first<<" "<<arr[i].second<<" ";
        }
        cout<<endl;

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