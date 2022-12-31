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
    int ev = 0, nev = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i]%2) nev++;
        else ev++;
    }
    if (ev == 1) {
        for (int i = 0; i < n; ++i) {
            if (v[i]%2 == 0) cout << i+1 << endl;
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (v[i]%2) cout << i+1 << endl;
        }
    }
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;

}
