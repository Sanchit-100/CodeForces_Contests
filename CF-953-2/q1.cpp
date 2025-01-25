#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<unordered_map>

using namespace std;
using ll=long long;

ll min2(ll a, ll b){
    if(a>b) return b;
    return a;
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;

            arr.push_back(temp);
        }

        int max=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>max) max=arr[i];
        }

        cout<<max+arr[n-1]<<endl;
    }

    return 0;
}