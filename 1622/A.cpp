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
    V<int> g(3);
    cin >> g;
    sort(all(g));
    if ((g[2] == g[1]+g[0]) ||\
        (g[2]%2 == 0 && g[1] == g[0]) ||\
        (g[1]%2 == 0 && g[2] == g[0]) ||\
        (g[0]%2 == 0 && g[1] == g[2]))
        cout << "yes" << endl;
    else cout << "no" << endl;

}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >>t;
    while(t--)

    solve();
    return 0;
}
