#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define MOD 1073741824
ll cd(ll n) {
    ll ans = 0;
    for (ll i = 1; i*i <= n; i++) {
        if (n%i==0) {
            if (n/i == i) ans++;
            else ans+=2;
        }
    }
    return ans;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, c;
    cin >> a >> b >> c;
    ll d[a*c*b+1];
    for (int i = 1; i <= a*c*b; i++) {
        d[i] = 0;
    }
    ll ans = 0;
    for (ll i = 1; i <= a; i++) {
        for (ll j = 1; j <= b; j++) {
            for (ll k = 1; k <= c; k++) {
                ll r = i*j*k;
                if (d[r] == 0) {
                    d[r] = cd(r);     
                }
                ans += d[r];
            }
        }
    }
    cout << ans%MOD << endl;
    return 0;
}
