#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> arr;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        int ans=0;

        unordered_map<vector<int>,vector<int>> mp;
        unordered_map<int,int> ct;
        for(int j=0;j<n-2;j++){
            mp[{arr[j],arr[j+1]}].push_back(arr[j+2]);
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            int n=(it->second).size();
            int curr=0;
            for(auto j:it->second){
                ct[j]++;
            }
            for(auto j:it->second){
                curr+=(it->second.size())-ct[j];
            }
            ans+=curr/2;
        }

        cout<<ans<<endl;

    }




    return 0;
}