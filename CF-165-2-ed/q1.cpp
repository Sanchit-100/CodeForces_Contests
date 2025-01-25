#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans=3;
        vector<int> arr;
        arr.push_back(-1);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        for(int i=1;i<n;i++){
            if(arr[arr[i]]==i){
                ans=2;
                break;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}