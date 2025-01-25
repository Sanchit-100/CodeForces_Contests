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
        string x;
        cin>>x;
        int flag=1;
        for(int i=1;i<x.length()-1;i++){
            if(x[i]=='0'){
                flag=0;
                break;
            }
        }
        if((x[0]=='1' && x[x.length()-1]!='9') && flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}