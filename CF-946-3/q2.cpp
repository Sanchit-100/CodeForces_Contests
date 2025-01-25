#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){

        int n;
        cin>>n;
        string b;
        cin>>b;
        string ans="";


        vector<int> ascii;
        unordered_map<int,bool> vis;
        for(int j=97;j<123;j++){
            vis[j]=false;
        }

        for(char it:b){
            if(vis[int(it)]==true){
                continue;
            }
            else{
                ascii.push_back(int(it));
                vis[int(it)]=true;
            }
        }

        // for(int j=0;j<ascii.size();j++){
        //     cout<<ascii[j]<<" ";
        // }

        // cout<<endl;
        sort(ascii.begin(),ascii.end());

        for(auto it:b){
            auto index=find(ascii.begin(),ascii.end(),int(it));
            int final=index-ascii.begin();
            ans+=char(ascii[ascii.size()-final-1]);
        }

        cout<<ans<<endl;

    }



    return 0;
}