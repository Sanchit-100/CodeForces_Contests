#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<unordered_map>

using namespace std;
using ll=long long;


int main(){
    ll t;
    cin>>t;

    vector<int> list={10,11,100,101,111,110,1000,1001,1010,1100,1110,1111,1101,1011,11000,11001,11010,11100,11110,11111,11101,11011,10000,10001,10010,10100,10110,10111,10101,10011};
    while(t--){
        int n;
        cin>>n;

        bool flag=false;

        for(int i=0;i<30;i++){
            if(n==1){
                flag=true;
            }

            cout<<list[i]<<endl;

            while(n%list[i]==0){
                n=n/list[i];
                cout<<n<<endl;
            }
        }


        if(n==1 || flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}