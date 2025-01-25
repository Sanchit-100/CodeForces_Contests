#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        map<char,vector<int> > cnt;

        cnt['C']={};
        cnt['S']={};
        cnt['D']={};
        cnt['H']={};

        char trump;
        cin>>trump;

        string temp;
        for(int i=0;i<2*n;i++){
            cin>>temp;
            cnt[temp[1]].push_back(int(temp[0])-48);
        }

        for(auto &it:cnt){
            sort(it.second.begin(),it.second.end());
        }

        int flag=0;
        int req=0;
        for(auto it:cnt){
            if(it.first!=trump){
                if(it.second.size()%2!=0){
                    req+=1;
                }
            }
        }

        flag=((cnt[trump].size()>=req)&&(cnt[trump].size()-req)%2==0?0:1);

        if(flag==0){
            string temp2="";
            string temp3="";
            for(auto &it:cnt){
                if(it.first!=trump){
                    while(it.second.size()>1){
                        // cout<<"hello"<<endl;
                        temp2=to_string(it.second[0]);
                        temp2+=it.first;
                        temp3=to_string(it.second[1]);
                        temp3+=it.first;
                        cout<<temp2<<" "<<temp3<<endl;

                        
                        (it.second).erase((it.second).begin());
                        
                        (it.second).erase((it.second).begin());
                        

                    }

                    if(it.second.size()==1){
                        cout<<to_string(it.second[0])+it.first<<" ";
                        cout<<to_string(cnt[trump][0])+trump<<endl;
                        cnt[trump].erase(cnt[trump].begin());
                    }
                        
                }
                
            }

            // cout<<cnt[trump].size()<<endl;
            while(cnt[trump].size()>0){

                temp2=to_string(cnt[trump][0]);
                temp2+=trump;
                temp3=to_string(cnt[trump][1]);
                temp3+=trump;
                cout<<temp2<<" "<<temp3<<endl;

                cnt[trump].erase(cnt[trump].begin());
                cnt[trump].erase(cnt[trump].begin());
                
            }
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
        
    }


    return 0;
}