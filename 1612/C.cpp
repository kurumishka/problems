#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS (1e9+7)
#define int long long

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

inline int sum(int n, int k) {
    int result = (n <= k) ? (n*(n+1))/2 : (k*(k+1))/2;
    n-=k;
    if(n > 0) {
        int d = k-n-1;
        result += ((k-1)*k)/2 - (d*(d+1))/2;
    }
    return result;
}

void solve() {
    int k, x;
    cin >> k >> x;
    int ans = 0;
    for(int i = 2*k-1; i >= 1; i/=2)
        while(sum(ans+i, k) < x && ans+i < 2*k-1) ans+=i;
    cout << ans+1 << endl;
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
