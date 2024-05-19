#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int count=0;
        if(c>min(a,b) && c<max(a,b)){
            count++;
        }

        if(d>min(a,b) && d<max(a,b)){
            count++;
        }

        if(count==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}