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
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<ll, ll> m;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        ll tmp;
        cin >> tmp;
        m[tmp] = i;
    }
    ll r; cin >> r;
    ll v = 0, p = 0;
    for (int i = 0; i < r; i++) {
        ll tmp;
        cin >> tmp;
        v += m[tmp];
        p += n-m[tmp]+1;
    }
    cout << v << " " << p << endl;
    return 0;
}
