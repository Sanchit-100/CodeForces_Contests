#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int max2(int a, int b){
    if(a>b) return a;
    return b;
}

int solution(vector<pair<int,int>> input, int money_left, int salary, int stored, int month, vector<vector<int>> dp){

    if(month>=input.size()) return stored;

    for(int i=0;i<dp.size();i++){
        if(dp[i][0]==money_left && dp[i][1]==stored && dp[i][2]==month){
            return dp[i][3];
        }
    }

    int op1=-1;
    if(money_left>=input[month].first){
        int updated_money=money_left+salary-input[month].first;
        int updated_stored=stored+input[month].second;

        op1=solution(input,updated_money,salary,updated_stored, month+1,dp);
    }

    int op2=solution(input,money_left+salary,salary,stored,month+1,dp);

    dp.push_back({money_left,stored,month,max(op1,op2)});
    

    return max2(op1,op2);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<pair<int,int>> cost_hap;
        int m,x;
        cin>>m>>x;

        while(m--){
            int cost,hap;
            cin>>cost>>hap;

            cost_hap.push_back({cost,hap});
        }

        vector<vector<int>> dp;

        cout<<solution(cost_hap,0,x,0,0,dp)<<endl;
    }


    return 0;
}