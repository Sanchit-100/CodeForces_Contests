#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int sum=0;
        int temp_a=1;
        int temp_b=n;

        while(temp_b!=0){
            sum+=(2*n-temp_a)*temp_b;
            temp_a+=2;
            temp_b-=1;
        }

        cout<<sum<<" "<<2*n<<endl;
        int flag=1;
        temp_b=n;

        for(int i=0;i<n;i++){
            flag=1;

            cout<<flag<<" "<<temp_b-i<<" ";

            for(int j=1;j<=n;j++){
                cout<<j<<" ";
            }

            cout<<endl;
            cout<<flag+1<<" "<<temp_b-i<<" ";
            
            for(int j=1;j<=n;j++){
                cout<<j<<" ";
            }

            cout<<endl;
        }
        
    }



    return 0;
}
