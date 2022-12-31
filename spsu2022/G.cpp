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

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    if (n <= 4 && n != 1)
        cout << 1 << endl;
    else if (n == 1)
        cout << 0 << endl;
    else {
        ++ans;
        n-=4;
        ans+=(n/3);
        if (n%3)
            ++ans;
        cout << ans << endl;
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
