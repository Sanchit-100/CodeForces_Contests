#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){

    vector<pair<int,int>> left;
    vector<int> dp_ans;
    dp_ans.push_back(-1);

    for(int i=1;i<1e5;i++){
        int ans = pow(pow(i+1,2)-pow(i,2),0.5);

        for(int j=0;j<left.size();j++){
            int limit=pow(pow(i+1,2)-pow(left[j].first,2),0.5);
            if(limit>left[j].first){
                limit=left[j].first;
                int counter=left[j].first-left[j].second+1;
                int fin_count=(counter*2-1)*4;
            } 
            if(limit>=left[j].second){

            }
        }
        if(ans!=i){
            left.push_back({i,ans+1});
            dp_ans.push_back((ans*8)+4);
        }
        else{
            dp_ans.push_back((((ans*2)-1)*4)+4);
        }
    }
    int t;
    cin>>t;


    for(int i=0;i<t;i++){
        int r;
        cin>>r;


    }


    return 0;
}