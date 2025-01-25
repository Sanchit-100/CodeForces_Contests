#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>> grid;
        // 0 denotes white and 1 denotes black
        vector<int> temp;
        for(int i=0;i<n;i++){
            temp.clear();
            string s;
            cin>>s;
            for(char it:s){
                if(it=='W') temp.push_back(0);
                else temp.push_back(1);
            }

            grid.push_back(temp);      
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        string ans="YES";

        int flag=0;
        int temp2=grid[0][0];
        for(int j=0;j<m;j++){
            if(temp2!=grid[0][j]){
                flag=1;
                break;
            }
        }

        temp2=grid[n-1][0];
        if(flag==0){
            for(int j=0;j<m;j++){
                if(temp2!=grid[n-1][j]){
                    flag=1;
                    break;
                }
            }   
        }


        int flag2=0;
        temp2=grid[0][0];
        for(int j=0;j<n;j++){
            if(temp2!=grid[j][0]){
                flag2=1;
                break;
            }
        }

        temp2=grid[0][m-1];
        if(flag2==0){
            for(int j=0;j<n;j++){
                if(temp2!=grid[j][m-1]){
                    flag2=1;
                    break;
                }
            }   
        }

        if(flag==0 && grid[0][0]!=grid[n-1][0]){
            ans="NO";
        }

        if(flag2==0 && grid[0][0]!=grid[0][m-1]){
            ans="NO";
        }

        cout<<ans<<endl;

    }



    return 0;
}