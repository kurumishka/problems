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

#define int long long

inline int count(int i, int r, int a) {
    int k = (r - (r%a))+(i%a);
    if (k > r) k-=a;
    return (k <= i) ? 0 : k/a-i/a;
}

void solve() {
    int l, r, a;
    cin >> l >> r >> a;
    int ans = 0;
    for (int i = l; i < r; ++i)
        ans += count(i, r, a);
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
