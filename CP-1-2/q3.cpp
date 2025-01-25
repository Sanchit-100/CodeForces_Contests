#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> start(n,-1);
    vector<int> end(n,-1);

    for(int i=0;i<n;i++){
        cin>>start[i];
        cin>>end[i];
    }

    sort(start.begin(),start.end());
    sort(end.begin(),end.end());

    int ans=0;
    int checker=0;
    int ct1=0;
    int ct2=0;

    while(ct1<n && ct2<n){
        if(start[ct1]<=end[ct2]){
            checker++;
            ct1++;
        }
        else{
            ct2++;
            checker--;
        }
        ans=max(checker,ans);
    }

    cout<<ans<<endl;

    return 0;
}