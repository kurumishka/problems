#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS (1e9+7)

// --------- vector operators ----------------
template<class T>
inline ostream& operator<<(ostream& os, V<T>& vec) {
    for(auto& x : vec) os << x << " ";
    return os; }

template<class T>
inline istream& operator>>(istream& is, V<T>& vec) {
    for(auto &x : vec) is >> x;
    return is; }
// ------------------------------------------

void solve() {
    int n, l, ans = 0;
    cin >> n >> l;
    V<int> a(n);
    cin >> a;
    for (int i = 0; i < l; ++i) {
        int o = 0, z = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j] & (1 << i)) o++;
            else z++;
        }
        if (o > z) ans |= (1 << i);
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
