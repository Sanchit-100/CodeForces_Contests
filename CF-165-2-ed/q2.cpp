#include<iostream>
#include<string>
using namespace std;
using ll=long long;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        ll temp=0;
        ll ans=0;
        int flag_1=0;
        for(int i=0;i<s.length();i++){

            // cout<<s[i]<<" ";
            if(flag_1==0 && s[i]=='1'){
                flag_1=1;
                // cout<<"Flag is changed"<<endl;
            }

            if (s[i]=='1'){
                temp+=1;
                // cout<<"temp is updated"<<endl;
            }
            
            if(s[i]=='0' && flag_1==1){
                ans+=temp+1;
                // cout<<"ans is updated"<<endl;
            }
            
        }

        cout<<ans<<endl;
    }


    return 0;
}