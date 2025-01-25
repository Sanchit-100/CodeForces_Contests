#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
using ll=long long;

int main(){

    int t;
    cin>>t;

    while(t--){
        ll x;
        cin>>x;

        int flag_neg=0;

        int size=int(log2(x))+1;
        vector<int> ans(size,0);

        while(x>1){
            int temp=int(log2(x));
            if(x<pow(2,temp)+pow(2,temp-1)){
                if(flag_neg==0){
                    ans[temp]=1;
                    x=x-pow(2,temp);
                }
                else{
                    ans[temp]=-1;
                    x=x-pow(2,temp);
                }
            }
            else{
                x=pow(2,temp+1)-x;
                if(flag_neg==0){
                    ans[temp+1]=1;
                }
                else{
                    ans[temp+1]=-1;
                }
                flag_neg=!flag_neg;
            }
        }

        if(x==1){
            if(flag_neg==0){
                ans[0]=1;
                
            }
            else{
                ans[0]=-1;
            }
        }

        cout<<ans.size()<<endl;
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;


    }

    return 0;
}