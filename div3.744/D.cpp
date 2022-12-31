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
    deque<int> a;
    a.pb(v[0]);
    for (int i = 1; i < n; i++) {
        if (a.front() > v[i]) a.push_front(v[i]);
        else a.pb(v[i]);
    }
    for (auto &x : a) cout << x << " ";
    cout << endl;
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
