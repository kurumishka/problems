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
int n, ans;
V<V<int>> a;

bool check() {
    set<int> vis;
    for (int i = 0; i < n; ++i) {
        bool ok = false;
        for (int j = 0; j < n; ++j)
            if (a[i][j] && !vis.count(j)) {
                vis.insert(j);
                ok = true;
                break;
            }
        if (!ok) return false;
    }
    return true;
}
void gen(int x = 0, int y = 0) {
    if (x == n) {
        x=0;
        y++;
    }
    if (y >= n) {
        if (check())
            ans = (ans+1)%((int)ANS);
        return;
    }
    for (int i = 0; i <= 1; ++i) {
        a[x][y] = i;
        gen(x+1, y);
    }
}

void solve() {
    cin >> n;
    a = V<V<int>> (n, V<int>(n,0));
    ans = 0;
    gen();
    cout << ans << endl;
}

signed main(void)
{
    freopen("input.in", "r", stdin);
    freopen("output", "w", stdout);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
