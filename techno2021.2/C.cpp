#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define int ll

void solve() {
    int n,p,k;
    cin >> n >> p >> k;
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    int ans = 1e9;
    V(int) dp(n,1e9);
    for (int i = p-1; i < n; i++) {
        dp[i] = (i-p+1)*y;
        dp[i]+=(s[i] == '0') ? x : 0;
    }
    for (int i = 0; i < n; i++) {
        if (i+k >= n) break;
        dp[i+k] = min(dp[i+k], dp[i]+((s[i+k] == '0') ? x : 0));
    }
    for (int i = n-k; i < n; i++)
        ans = min(ans, dp[i]);
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
