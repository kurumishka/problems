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


V<V<char>> v;
int n;

bool check(int x, int y) {
    for (int i = 0; i < n; ++i) {
        if (v[x][i] == 0) continue;
        else if (i+1 < n && x+1 < n && v[x][i] == '1' && v[x+1][i] == '0' && v[x][i+1] == '0')
            return false;
    }
    for (int i = 0; i < n; ++i) {
        if (v[i][y] == 0) continue;
        else if (i+1 < n && y+1 < n && v[i][y] == '1' && v[i][y+1] == '0' && v[i+1][y] == '0')
            return false;
    }
    return true;
}

void solve() {
    cin >> n;
    v = V<V<char>> (n, V<char>(n, 0));
    for (auto& x : v)
        cin >> x;
    int s = n-2;
    while (s >= 0) {
        if (!check(s,s)) {
            cout << "NO" << endl;
            return;
        }
        s--;
    }
    cout << "YES" << endl;
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
