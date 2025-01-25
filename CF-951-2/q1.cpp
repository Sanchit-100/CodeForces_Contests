#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans=INT_MAX;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        for(int i=0;i<n-1;i++){
            int temp=max(arr[i],arr[i+1]);
            ans=min(ans,temp);
        }

        cout<<ans-1<<endl;
    }


    return 0;
}