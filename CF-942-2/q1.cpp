#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    int t;
    cin>>t;

    vector<int> a;
    vector<int> b;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        a.clear();
        b.clear();

        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }

        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            b.push_back(temp);
        }

        int counter=0;
        int ans=INT_MIN;
        for(int j=0;j<n;j++){
            counter=0;
            for(int k=j;k<n;k++){
                if(a[j]<=b[k]){
                    break;
                }
                else{
                    counter++;
                }
            }

            ans=max(counter,ans);
        }

        cout<<ans<<endl;
    }



    return 0;
}