#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define fr(na,ze,va) for (auto na = ze; na < va; na++)
#define F first
#define S second
ll f(ll x, ll k)
{
    ll ans = 0;
    int p = 0;
    while (x/pow(k,p) > 0) {
        ans += x/pow(k,p);
        p++;
    }
    return ans;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k; cin >> n >> k;
    ll ans = -1;
    for (int i = n; i >= 1; i/=2) {
        while (f(ans+i, k) < n) ans+=i;
    }


    cout << ans+1 << endl;
    // f(x) = x + x/k + x/k^2 + x/k^3 + ... + x/k^m, x/k^m > 0.
    // find min x, where f(x) >= n.
    // therefore we need to find x, where f(x) >= n and f(x-1) < n;

    return 0;
}
