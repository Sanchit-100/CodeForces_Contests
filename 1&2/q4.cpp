#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<map>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<ll> cakes(n,0);
        unordered_map<int,int> mp;
        for(auto &it:cakes){
            cin>>it;
            mp[it]++;
        }

        vector<pair<int,int>> alice;
        vector<pair<int,int>> bob;

        for(auto it:mp){
            alice.push_back({it.first,it.second});
            bob.push_back({it.second,it.first});
        }

        sort(cakes.begin(),cakes.end());

        sort(alice.begin(),alice.end());
        sort(bob.begin(),bob.end());

        // for(auto it:alice) cout<<it.first<<" "<<it.second<<endl;
        // for(auto it:bob) cout<<it.first<<" "<<it.second<<endl;

        int i=0,j=0;
        int last=0;
        int turn=0;
        int ans=0;
        int temp=0;
        int temp2=0;
        while(i<alice.size() && j<bob.size()){
            if(turn==0){
                ans+=1;
                last=alice[i].first;
                i++;
                turn++;
            }
            else if(turn==1 && last>=bob[i].second){
                j++;
            }
            else{
                temp=bob[j].second;
                temp2=bob[j].first;
                if(alice[i+temp2-2].first<temp){
                    temp2=lower_bound(cakes.begin(),cakes.end(),bob[j].second)-cakes.begin();
                    bob[j].first-=1;
                    if(bob[j].first==0){
                        bob.erase(bob.begin()+j);
                        alice.erase(alice.begin()+temp2);
                    }

                    turn--;
                }   
                else{
                    j++;
                }
               
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}