#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        string inst;
        cin>>inst;

        // int n,s,e,w;
        // for(char it:inst){
        //     if(it=='N')n++;
        //     if(it=='E')e++;
        //     if(it=='W')w++;
        //     if(it=='S')s++;
        // }

        // int vertical=abs(n-s);
        // int horizontal=abs(e-w);
        string ans="";

        pair<int,int> rover={0,0};
        pair<int,int> plane={0,0};

        int move_p=0;
        int move_r=0;

        for(char it:inst){
            if(it=='N'){
                if(rover.first>plane.first){
                    plane.first+=1;
                    ans+='H';
                    move_p++;
                }
                else if(rover.first==plane.first){
                    if(move_p==0){
                        plane.first++;
                        ans+='H';
                        move_p++;
                    }
                    else{
                        rover.first++;
                        ans+='R';
                        move_r++;
                    }
                }
                else{
                    rover.first+=1;
                    ans+='R';
                    move_r++;
                }
            }
            else if(it=='S'){
                if(rover.first>plane.first){
                    rover.first-=1;
                    ans+='R';
                    move_r++;
                }
                else if(rover.first==plane.first){
                    if(move_p==0){
                        plane.first--;
                        ans+='H';
                        move_p++;
                    }
                    else{
                        rover.first--;
                        ans+='R';
                        move_r++;
                    }
                }

                else{
                    plane.first-=1;
                    ans+='H';
                    move_p++;
                }
            }
            else if(it=='E'){
                if(rover.second>plane.second){
                    plane.second+=1;
                    ans+='H';
                    move_p++;
                }

                else if(rover.second==plane.second){
                    if(move_p==0){
                        plane.second++;
                        ans+='H';
                        move_p++;
                    }
                    else{
                        rover.second++;
                        ans+='R';
                        move_r++;
                    }
                }

                else{
                    rover.second+=1;
                    ans+='R';
                    move_r++;
                }
            }
            else if(it=='W'){
                if(rover.second>plane.second){
                    rover.second-=1;
                    ans+='R';
                    move_r++;
                }

                else if(rover.second==plane.second){
                    if(move_p==0){
                        plane.second--;
                        ans+='H';
                        move_p++;
                    }
                    else{
                        rover.second--;
                        ans+='R';
                        move_r++;
                    }
                }

                else{
                    plane.second-=1;
                    ans+='H';
                    move_p++;
                }
            }
        }

        // cout<<rover.first<<" "<<rover.second<<endl;
        // cout<<plane.first<<" "<<plane.second<<endl;

        int cnt_r=0;
        int cnt_p=0;

        if(rover.first==plane.first && rover.second==plane.second){
            for(auto it: ans){
                if(it=='R') cnt_r++;
                else if (it=='H') cnt_p++;
            }

            if(cnt_p==0 || cnt_r==0) cout<<"NO"<<endl;
            else cout<<ans<<endl;
        } 
        else cout<<"NO"<<endl;
    }

    return 0;
}