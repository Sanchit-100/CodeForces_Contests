#include<iostream>
#include<vector>
#include<climits>
#include<string>
using ll=long long;
using namespace std;
int main(){

    ll t;
    cin>>t;

    while(t--){
        string a,b;
        string a1,b1="";
        cin>>a>>b;

        ll flag=1;

        for(ll i=0;i<a.length();i++){
            if(flag==1){
                a1+=max(a[i],b[i]);
                b1+=min(a[i],b[i]);
            }
            else{
                a1+=min(a[i],b[i]);
                b1+=max(a[i],b[i]);
            }

            if(a[i]!=b[i]) flag=0;   
        }

        for(ll i=0;i<a.length();i++) cout<<a1[i];
        cout<<endl;
        for(ll i=0;i<a.length();i++) cout<<b1[i];
        cout<<endl;

        
    }
}