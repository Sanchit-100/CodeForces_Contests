#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    long long t;
    cin>>t;
    
    for(long long i=0;i<t;i++){
        long long n,q;
        long long k;
        cin>>n>>k>>q;

        vector<long long> k_stops;
        vector<long long> k_time;
        vector<long double> const_speeds;

        k_stops.push_back(0);
        k_time.push_back(0);

        for(long long j=0;j<k;j++){
            long long temp;
            cin>>temp;
            k_stops.push_back(temp);
        }

        for(long long j=0;j<k;j++){
            long long temp;
            cin>>temp;
            k_time.push_back(temp);
        }

        for(long long j=1;j<=k;j++){
            const_speeds.push_back(float(k_time[j]-k_time[j-1])/float(k_stops[j]-k_stops[j-1]));
        }


        // for(int m=0;m<const_speeds.size();m++){
        //     cout<<const_speeds[m]<<" ";
        // }
        // cout<<endl;

        for(long long j=0;j<q;j++){
            long long curr;
            cin>>curr;

            long long low_num=lower_bound(k_stops.begin(),k_stops.end(),curr)-k_stops.begin();
            if(k_stops[low_num]!=curr){
                low_num=low_num-1;
                long long ans=k_time[low_num]+(long long)((curr-k_stops[low_num])*const_speeds[low_num]);
                cout<<ans<<" ";
            }
            else{
                long long ans = k_time[low_num];
                cout<<ans<<" ";
            } 
            
        }
        

    }
    




    return 0;
}