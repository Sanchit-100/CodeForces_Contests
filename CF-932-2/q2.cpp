#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;
using ll=long long;

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

        // int max=0;
        // unordered_map<int,int> ct;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>max) max=arr[i];
        //     ct[arr[i]]++;
        // }

        // int target=0;
        // for(int i=0;i<=max;i++){
        //     if(ct[i]==0){
        //         target=i;
        //         break;
        //     }
        // }

        vector<int> prefix;
        vector<int> suffix(n,0);
        unordered_map<int,int> ct;
        unordered_map<int,int> ct2;

        int mex1=0;
        for(int i=0;i<n;i++){
            ct[arr[i]]++;
            while(ct[mex1]>0){
                mex1++;
            }
            prefix.push_back(mex1);
        }

        int mex2=0;
        for(int i=n-1;i>=0;i--){
            ct2[arr[i]]++;
            while(ct2[mex2]>0){
                mex2++;
            }
            suffix[i]=mex2;
        }

        // for(auto it: prefix){
        //     cout<<it<<" ";
        // }

        // cout<<endl;

        // for(auto it: suffix){
        //     cout<<it<<" ";
        // }

        // cout<<endl;

        int mid=-1;
        for(int i=0;i<n-1;i++){
            if(prefix[i]==suffix[i+1]){
                mid=i+1;
                break;
            }
        }

        if(mid!=-1 && mid<n){
            cout<<2<<endl;
            cout<<1<<" "<<mid<<endl;
            cout<<mid+1<<" "<<n<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }



    return 0;
}