#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> amt;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            amt.push_back(temp);
        }

        ll lcm = amt[0];
        for (int i = 1; i < n; i++)
        {
            ll temp = gcd(lcm, amt[i]);
            lcm=(lcm*amt[i])/temp;
        }

        // cout<<lcm<<endl;

        vector<int> ans;
        for(auto it:amt){
            ans.push_back(lcm/it);
        }

        ll sum=0;
        for(auto it:ans){
            sum+=it;
        }

        if(sum>=lcm){
            cout<<-1<<endl;
        }
        else{
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}