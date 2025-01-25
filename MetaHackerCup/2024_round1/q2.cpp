#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>
#include<string>
#include<climits>
# define MAX 10000000
#define int ll

using namespace std;
using ll=long long;


void solve()
{
    
    vector<int> primes;
    vector<bool> isPrime(MAX + 1, true);

    isPrime[0] = isPrime[1] = false;
    
    for (int p = 2; p * p <= MAX; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= MAX; i += p) {
                isPrime[i] = false;
            }
        }
    }
    
    for (int p = 2; p <= MAX; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    int t;
    cin>>t;
    

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ct=0;
        if(n>=5) ct=1;

        for(int j=0;j<primes.size();j++){
            if(primes[j]>n) break;
            if(binary_search(primes.begin(), primes.end(), primes[j]-2)) ct++;
        }

        cout<<"Case #"<<i+1<<": "<<ct<<endl; 
    }

}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ifstream infile("test.txt");
    if (!infile) {
        cerr << "Unable to open file test.txt";
        return 1; // Return an error code
    }

    cin.rdbuf(infile.rdbuf());
    solve();

    return 0;
}