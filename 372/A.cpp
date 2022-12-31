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
    int n;
    cin >> n;
    V<int> v(n);
    cin >> v;
    sort(all(v));
    V<int> f,s;
    for (int i = 0; i < n/2; ++i)
        f.pb(v[i]);
    for (int i = n/2; i < n; ++i)
        s.pb(v[i]);
    int ans = n;
    auto l = f.begin(),
         r = s.begin();
    while(l != f.end() && r != s.end()) {
        if ((*l)*2 <= *r) {
            l++;
            r++;
            ans--;
        }
        else
            r++;
    }
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
