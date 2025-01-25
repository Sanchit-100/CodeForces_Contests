#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<int> a;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }

        for(int i=1;i<=n;i++){
            mp[i]=0;
        }

        int ans=0;

        for(int i=0;i<n;i++){
            mp[a[i]]++; 
        }

        for(int i=1;i<=n;i++){
            if(mp[i]==2) ans+=1; 
        }

        cout<<ans<<endl;

    }



    return 0;
}