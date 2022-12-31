#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long

int h_c, d_c, h_m, d_m;
int k, w, a;

inline bool bs(int n) {
    int d = d_c+n*w, h = h_c+(k-n)*a;
    int m_killed = h_m/d + (h_m%d == 0 ? 0 : 1);
    int p_killed = h/d_m + (h%d_m == 0 ? 0 : 1);
    return (p_killed >= m_killed);
}

void solve() {
    cin >> h_c >> d_c >> h_m >> d_m;
    cin >> k >> w >> a;
    int ans = 0;
    while (ans < k && !bs(ans)) ++ans;
    cout << (!bs(ans) ? "no" : "yes") << endl;
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
