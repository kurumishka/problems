#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

#define int long long

void solve() {
    int n;
    cin >> n;
    set<int> rest;
    for(int i = 1; i < 1e5; ++i) {
        int d = (n*i-2)%3;
        if (d == 0) {
            cout << "YES" << endl;
            return;
        }
        if (rest.count(d)) {
            cout << "NO" << endl;
            return;
        }
        rest.insert(d);
    }
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
