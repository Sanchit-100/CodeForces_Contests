#include<iostream>
#include<string>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int flag=0;
        string s;
        cin>>s;
        string new_s=s;
        for(int j=1;j<s.length();j++){
            if(s[j]!=s[j-1]){
                new_s[j-1]=s[j];
                new_s[j]=s[j-1];
                cout<<"YES"<<endl;
                cout<<new_s<<endl;
                flag=1;
                break;
            }
        }

        if(flag==0){
            cout<<"NO"<<endl;
        }
    }


    return 0;
}