#include<iostream>
#include<string>
#include<vector>

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

        bool reverse=false;

        for(int i=0;i<(s.length())/2;i++){
            if(s[i]>s[s.length()-i-1]){
                reverse=true;
                break;
            }
            else if(s[i]<s[s.length()-i-1]){
                break;
            }
        }

        string rev_s="";
        for(int i=0;i<s.length();i++){
            rev_s+=s[s.length()-i-1];
        }
        
        for(int i=0;i<s.length();i++){
            rev_s+=s[i];
        }
        
        if(reverse){
            cout<<rev_s<<endl;
        }
        else{
            cout<<s<<endl;
        }

        

    }



    return 0;
}