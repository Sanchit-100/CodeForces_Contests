#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int n=s.length();
        int flag=0;

        vector<int> dp;
        for(int j=0;j<n;j++){
            dp.push_back(0);
        }

        dp[n-1]=1;

        for(int j = n-2;j>=0;j--){
            if(s[j]==s[j+1]){
                dp[j]=dp[j+1];
            }
            else if(s[j]=='1' && s[j+1]=='0'){
                dp[j]=dp[j+1]+1;
            }
            else{
                flag+=1;
                if(flag>1){
                    dp[j]=dp[j+1]+1;
                }
                else dp[j]=dp[j+1];
            }
        }

        cout<<dp[0]<<endl;

    }


    return 0;
}