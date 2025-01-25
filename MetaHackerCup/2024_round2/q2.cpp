#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>
#include<string>
#include<climits>
#define MAX 10000000
#define int ll

using namespace std;
using ll = long long;

bool isCorrect(const string &str) {
    int len = str.length();
    if (len % 2 == 0 || str[len - 1] == '0') return false;

    int mid = len / 2;
    for (int i = 0; i < mid; ++i) {
        if (str[i] > str[i + 1]) return false;
    }
    for (int i = mid; i < len - 1; ++i) {
        if (str[i] < str[i + 1]) return false;
    }
    return str[mid] != str[mid - 1] && str[mid] != str[mid + 1];
}

void solve() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int a, b, m;
        cin >> a >> b >> m;
        
        int ans = 0;
        for (int k = 1; k <= b; ++k) {
            int mk = m * k;
            if (mk > b) break;
            if (mk >= a) {
                if (isCorrect(to_string(mk))) {
                    ans++;
                }
            }
        }
        
        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream infile("final.txt");
    if (!infile) {
        cerr << "Unable to open file test.txt";
        return 1; // Return an error code
    }

    cin.rdbuf(infile.rdbuf());
    solve();
    return 0;
}
