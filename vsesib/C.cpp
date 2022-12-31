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
    ll n, m, w;
    cin >> n >> m >> w;
    V(ll) v(n), a(m);
    for (auto &x : v)
        cin >> x;
    for (auto &x : a)
        cin >> x;
    sort(all(v));
    sort(all(a),[](ll &a, ll &b){return a > b;});
    ll sum = 0;
    int t = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] > w*v[0]) {
            sum+=a[i];
            t++;
        }
        else break;
        
    }
    cout << sum-w*v[0]*t << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
