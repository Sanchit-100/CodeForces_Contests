#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;

    vector<ll> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}