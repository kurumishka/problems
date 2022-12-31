#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
#define T_MAX(a,b,c) max(max(a,b),c)
#define SUPER_DUPER_FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define REV [](const int &a, const int &b){return a > b;}
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define US(T) unordered_set<T>

void solve() {
    int n;
    cin >> n;
    V(ll) a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    V(ll) dp(n,0);
    for (int i = 0; i < n; i++) {
        dp[i] = (dp[i] == 0) ? a[i] : dp[i];
        if (i+a[i] < n)
            dp[i+a[i]] = max(dp[i+a[i]], dp[i]+a[i+a[i]]);
    }
    ll m = 0;
    for (int i = 0; i < n; i++)
        m = max(dp[i],m);
    cout << m << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    times
    {
    solve();
    }
    return 0;
}
