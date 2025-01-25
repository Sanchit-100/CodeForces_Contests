#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int k,q;
        cin>>k>>q;

        vector<int> arr;
        vector<int> queries;

        for(int i=0;i<k;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        for(int i=0;i<q;i++){
            int temp;
            cin>>temp;
            queries.push_back(temp);
        }

        int min1=arr[0];
        for(int i=0;i<q;i++){
            if(min1<=queries[i]) cout<<min1-1<<" ";
            else cout<<queries[i]<<" "; 
        }

        cout<<endl;
    }



    return 0;
}