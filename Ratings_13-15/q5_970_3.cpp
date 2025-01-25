#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<climits>
#include<map>

#define int ll

using namespace std;
using ll=long long;


void solve()
{
    int t;

    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        map<char,int> ct_even;
        map<char,int> ct_odd;
        for(int i=0;i<s.length();i+=2) ct_even[s[i]]++;
        for(int i=1;i<s.length();i+=2) ct_odd[s[i]]++;

        int max_even_ct=0; int max_char_even=s[0];
        int max_odd_ct=0; int max_char_odd=s[1];   
        for(auto it:ct_even){
            max_even_ct=max(max_even_ct,it.second);
            max_char_even=it.first;
        } 
        for(auto it:ct_odd){
            max_odd_ct=max(max_odd_ct,it.second);
            max_char_odd=it.first;
        } 

        if(s.length()%2==0){
            cout<<s.length()-max_even_ct-max_odd_ct<<endl;
        }
        else{
            map<char,int> prefix_even;
            map<char,int> prefix_odd;
            int ans=s.length();
            for(int i=0;i<n;i++){
                
                int temp_max_even=0;
                int temp_max_odd=0;
                if(i%2==0){
                    for(auto it:ct_even){
                        temp_max_odd=max(temp_max_odd,it.second+prefix_odd[it.first]-prefix_even[it.first]-(s[i]==it.first?1:0));
                    }
                    for(auto it:ct_odd){
                        temp_max_even=max(temp_max_even,it.second+prefix_even[it.first]-prefix_odd[it.first]);
                    }

                    for(auto it:prefix_even) temp_max_even=max(temp_max_even,it.second);
                    for(auto it:prefix_odd) temp_max_odd=max(temp_max_odd,it.second);

                    ans=min(ans,n-1-temp_max_even-temp_max_odd);
                    prefix_even[s[i]]++;
                }
                else{
                    for(auto it:ct_even){
                        temp_max_odd=max(temp_max_odd,it.second+prefix_odd[it.first]-prefix_even[it.first]);
                    }
                    for(auto it:ct_odd){
                        temp_max_even=max(temp_max_even,it.second+prefix_even[it.first]-prefix_odd[it.first]-(s[i]==it.first?1:0));
                    }

                    for(auto it:prefix_even) temp_max_even=max(temp_max_even,it.second);
                    for(auto it:prefix_odd) temp_max_odd=max(temp_max_odd,it.second);

                    ans=min(ans,n-1-temp_max_even-temp_max_odd);
                    prefix_odd[s[i]]++;
                }

                // cout<<temp_max_even<<" "<<temp_max_odd<<endl;

                
            }
            cout<<ans+1<<endl;
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