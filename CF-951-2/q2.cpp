#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
using ll=long long;

int main(){

    int t;
    cin>>t;

    while(t--){
        ll x,y;
        cin>>x>>y;
        
        vector<int> v1, v2;

        while(x!=0){
            v1.push_back(x%2);
            x=x/2;
        }

        while(y!=0){
            v2.push_back(y%2);
            y=y/2;
        }

        while(v1.size()<v2.size()) v1.push_back(0);
        while(v2.size()<v1.size()) v2.push_back(0);

        int k=0;
        for(int i=0;i<v1.size();i++){
            if(v1[i]==v2[i]) k++;
            else break;
        }
        ll ans=pow(2,k);
        cout<<ans<<endl;

    }
    
    return 0;
}