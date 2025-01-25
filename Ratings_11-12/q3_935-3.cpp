#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
#include<string>
using ll=long long;
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string a;
        cin>>a;

        ll mid=0;
        ll mid2=0;
        if(n%2==0){
            mid=(n/2)-1;
            mid2=(n/2)-1;
        }
        else{
            mid=n/2-1;
            mid2=n/2;
        }
        
        ll satisfied_left=0;
        ll satisfied_right=0;
        ll satisfied_left_2=0;
        ll satisfied_right_2=0;

        for(ll i=0;i<=mid;i++){
            if(a[i]=='0') satisfied_left++;
        }
        for(ll i=mid+1;i<n;i++){
            if(a[i]=='1') satisfied_right++;
        }

        for(ll i=0;i<=mid2;i++){
            if(a[i]=='0') satisfied_left_2++;
        }
        for(ll i=mid2+1;i<n;i++){
            if(a[i]=='1') satisfied_right_2++;
        }

        
        ll left=0;
        ll right=0;
        ll ans=0;
        ll flag=n;
        while(flag--){
            // cout<<satisfied_left<<" "<<satisfied_right<<endl;
            // cout<<satisfied_left_2<<" "<<satisfied_right_2<<endl;

            if(mid>=-1){
                left=mid+1;
                right=n-left;
                if(satisfied_left>=ceil(left/2.0) && satisfied_right>=ceil(right/2.0)){
                    ans=mid+1;
                    break;
                }
            }
            
            if(mid2<=n-1){
                left=mid2+1;
                right=n-left;
                if(satisfied_left_2>=ceil(left/2.0) && satisfied_right_2>=ceil(right/2.0)){
                    ans=mid2+1;
                    break;
                }
            }
            

            if(mid>=0 && a[mid]=='0'){
                satisfied_left--;
            }
            else{
                satisfied_right++;
            }


            if(mid2<=n-1 && a[mid2]=='0'){
                satisfied_left_2++;
            }
            else{
                satisfied_right_2--;
            }


            mid=mid-1;
            mid2=mid2+1;

        }

        cout<<ans<<endl;

    }

    return 0;
}