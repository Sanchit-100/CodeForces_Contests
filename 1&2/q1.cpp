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
        int n,k;
        cin>>n>>k;

        cout<<(n-1)*k+1<<endl;
    }


    return 0;
}