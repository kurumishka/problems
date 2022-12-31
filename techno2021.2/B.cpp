#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int n, k;
    cin >> n >> k;
    V(int) v(n);
    map<int,int> cols;
    for (auto &x : v) {
        cin >> x;
        cols[x]++;
    }
    int ans = 1e9;
    for (auto it = cols.begin(); it != cols.end(); it++) {
        int la = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == it->first) continue;
            i+=(k-1);
            la++;
        }
        ans = min(ans,la);
    }
    cout << ans << endl;

} 

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
