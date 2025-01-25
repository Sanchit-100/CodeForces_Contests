#include<iostream>
#include<string>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int u=0;
        for(char it:s){
            if(it=='U'){
                u++;
            }
        }

        if(u%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    
    }

    return 0;
}