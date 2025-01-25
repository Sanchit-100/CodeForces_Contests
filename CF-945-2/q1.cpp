#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int p1,p2,p3;
        cin>>p1>>p2>>p3;

        if((p1+p2+p3)%2!=0){
            cout<<-1<<endl;
        }
        else{
            int counter=0;
            while((p1!=0 && p2!=0) || (p2!=0 && p3!=0) || (p1!=0 && p3!=0)){
                if(p1>=p2 && p2>=p3){
                    p1--;
                    p2--;
                }
                else if(p1>=p3 && p3>=p2){
                    p1--;
                    p3--;
                }
                else if(p2>=p1 && p1>=p3){
                    p2--;
                    p1--;
                }
                else if(p2>=p3 && p3>=p1){
                    p2--;
                    p3--;
                }
                else if(p3>=p2 && p2>=p1){
                    p3--;
                    p2--;
                }
                else if(p3>=p1 && p1>=p2){
                    p3--;
                    p1--;
                }

                counter++;
            }

            cout<<counter<<endl;
        }
    }


    return 0;
}