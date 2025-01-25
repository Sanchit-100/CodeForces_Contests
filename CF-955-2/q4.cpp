#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<int> digits;
        for(char it:s) digits.push_back(int(it)-48);

        // for(auto it:digits) cout<<it<<" ";
        // cout<<endl;

        
        int ans=0;
        int flag=0;

        if(n==3 && (digits[0]==0 || digits[2]==0)){
            flag=1;
        }
        if(n>3){
            for(int i=0;i<n;i++){
                if(digits[i]==0){
                    flag=1;
                } 
            }
        }
        

        int min_2=INT_MAX;
        int min_i=-1;
        int temp=digits[0];
        for(int i=1;i<n;i++){
            temp=(digits[i-1]*10)+digits[i];
            if(temp<min_2){
                min_2=temp;
                min_i=i-1;
            } 
        }

        for(int i=0;i<n;i++){
            if(i!=min_i && i!=min_i+1 && digits[i]!=1){
                ans+=digits[i];
            }
        }

        int flag2=1;
        for(int i=0;i<n;i++){
            if(digits[i]!=1) flag2=0; 
        }

        if(n==2){
            cout<<digits[0]*10+digits[1]<<endl;
        }
        else if(flag==1){
            cout<<0<<endl;
        }
        else if(flag2==1){
            cout<<1<<endl;
        }
        else if(ans==0){
            cout<<1<<endl;
        }
        else if(min_2==1){
            cout<<ans<<endl;
        }
        else{
            cout<<ans+min_2<<endl;
        }
    }

    return 0;
}