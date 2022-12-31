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
    int n; cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll tmp; cin >> tmp;
        v.pb(tmp);
    }
    sort(all(v));
    vector<ll> l, r;
    for (int i = 0; i < n/2; i++) {
        l.pb(v[i]);
    }
    for (int i = n/2; i < n; i++) {
        r.pb(v[i]);
    }
    vector<ll> ans;
    for (int i = 0; i < n/2+n%2; i++) {
        if (i < l.size()) {
            ans.pb(r[i]);
            ans.pb(l[i]);
        }
        else
            ans.pb(r[i]);
    }
    cout << ((n%2) ? n/2 : n/2-1) << endl;
    for (auto &x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}

