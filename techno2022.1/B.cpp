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
    int n,m;
    cin >> n >> m;
    set<int> v;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v.insert(b);
    }
    int p;
    for (int i = 0; i < n; i++) {
        if (!v.count(i+1)) {
            p = i+1;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i+1 == p) continue;
        cout << p << " " << i+1 << endl;
    }
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
