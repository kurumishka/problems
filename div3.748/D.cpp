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
    int n;
    cin >> n;
    V(int) v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    if (v[0] == v.back()) {
        cout << -1 << endl;
        return;
    }
    ll lim = (ll)abs(v[0])+abs(v.back());
    int d = 1;
    for (int i = 2; i <= lim; i++) {
        int td = v.back();
        while(td < 0) td+=i;
        int tmp = td%i;
        bool ok = true;
        for (int j = 0; j < n; j++) {
            ll tp = v[j];
            while (tp < 0) tp+=i;
            if (tp%i != tmp) {
                ok = false;
                break;
            }
        }
        if (ok) d = i;
    }
    cout << d << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {

    solve();
    }
    return 0;
}
