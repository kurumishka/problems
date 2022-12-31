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
    ll n, t;
    cin >> n >> t;
    ll dp[n], a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = (i == 0) ? a[i] : dp[i-1]+a[i];
    }
    
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll k = 0;
        ll diff = (i == 0) ? 0 : dp[i-1];
        for (int b = n; b >= 1; b/=2) {
            while(k+b < n && dp[k+b]-diff <= t) k+=b;
        }
        if (k == 0 && n > 1) continue;
        else if (n == 1 && a[0] <= t) ans = 1;
        else if (n == 1 && a[0] > t) {ans = 0; break;}
        if (k-i+1 > ans) ans = k-i+1;
    }
    cout << ans << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
