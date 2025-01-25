#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
using ll=long long;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr;
        unordered_map<int,int> ct;

        int ans=n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        for(int i=0;i<n;i++){
            ct[arr[i]]++;
        }

        for(auto it=ct.begin();it!=ct.end();it++){
            if(it->second>=k){
                ans=k-1;
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
    
}
