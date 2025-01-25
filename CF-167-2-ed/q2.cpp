#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;

    while(t--){
        string a,b;
        cin>>a>>b;

        ll min=a.length();
        ll max=0;
        ll temp=0;

        ll i=0;
        ll j=0;
        for(ll k=0;k<b.length();k++){
            temp=0;
            i=0;
            j=k;
            while(i<a.length() && j<b.length()){
                if(b[j]==a[i]){
                    temp+=1;
                    i++;
                    j++;        
                }
                else{
                    i++;
                }
            }

            if(temp>max) max=temp;
        }
        

        cout<<min+b.length()-max<<endl;
    }

    return 0;
}