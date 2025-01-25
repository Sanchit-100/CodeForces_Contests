#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        float x,y;
        cin>>x>>y;

        int min_screens = ceil(y/2);
        // cout<<min_screens<<endl;
        int rem_spot=0;
        if(int(y)%2==0){
            rem_spot=7*min_screens;
        }
        else{
            rem_spot=7*(min_screens-1)+11;
        }

        if(x<=rem_spot) cout<<min_screens<<endl;
        else{
            x=x-rem_spot;
            cout<<min_screens+ceil(x/15)<<endl;
        }

    }



    return 0;
}