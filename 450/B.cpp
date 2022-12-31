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
ll f(ll n, ll x, ll y)
{
    if (n == 1)
        return x;
    else if (n == 2)
        return y;
    else {
        ll f1, f2, res, tmp;
        if (x < 0) x+=ANS;
        if (y < 0) y+=ANS;
        f1 = x; f2 = y;
        for (int i = 2; i < n; i++) {
            res = f2-f1%ANS;
            if (res < 0) res += ANS;
            tmp = f2;
            f2 = res;
            f1 = tmp;
        }
        return res;
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x,y,n; cin >> x >> y >> n;
    ll a = (n%6) ? n%6 : 6;
    ll ans = f(a,x,y);
    if (ans < 0) ans += ANS;
    cout << ans << endl;
    return 0;
}
