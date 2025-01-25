#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>

#define int ll

using namespace std;
using ll=long long;

string decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
     string ans="";
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        ans+=binaryNum[j];

    return ans;
}

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

void solve()
{
    int t;
    cin>>t;

    while(t--){
        // int n;
        // cin>>n;

        // vector<int> arr(n,0);
        // for(int i=0;i<n;i++){
        //     cin>>arr[i];
        // }

        // int k=0;
        // for(int i=0;i<n;i++){
        //     k=(i%2==0)?k&arr[i]:k|arr[i];
        // }
        // cout<<k<<endl;

        int n;
        cin>>n;

        if(n==5){
            cout<<5<<endl;
            cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
        }
        else if(n%2==0){
            int d=n;
            int temp=floor(log2(d+1));
            int temp2=ceil(log2(d+1));
            cout<<pow(2,temp2)-1<<endl;
            int c = pow(2,temp)-1;
            int b = c-1;
            int a = 1;

            for(int i=1;i<=n;i++){
                if(i!=a && i!=b && i!=c && i!=d){
                    cout<<i<<" ";
                }
            }
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
            

        }
        else{
            n--;
            int d=n;
            cout<<d+1<<endl;
            int temp=floor(log2(d+1));
            int c = pow(2,temp)-1;
            int b = c-1;
            int a = 1;

            for(int i=1;i<=n;i++){
                if(i!=a && i!=b && i!=c && i!=d){
                    cout<<i<<" ";
                }
            }
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<n+1<<endl;
        }
    }

}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}